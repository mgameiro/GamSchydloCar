//Making interruptions with timer 1
void initTimer1(double T){
  TCCR1A = 0;// clear register
  TCCR1B = 0;// clear register
  TCNT1 = 0;//reset counter
  OCR1A = (int)(15624*T); //must be <65536
  // = (16*10^6) / (1*1024) – 1
  TCCR1B |= (1 << WGM12); //CTC On
  // Set prescaler for 1024
  TCCR1B |= (1<<CS12)|(1<<CS10);
  // enable timer compare interrupt
  TIMSK1 |= (1 << OCIE1A);
}

void ledTimer1Test(){
  boolean toggle1 = 0;
  pinMode(13, OUTPUT);
  if (toggle1){
    digitalWrite(13,HIGH);
    toggle1 = 0;
  }
  else{
    digitalWrite(13,LOW);
    toggle1 = 1;
  }
}

void testScanCycle(unsigned long *ams, unsigned long *ms){
  *ams = *ms;
  *ms = millis();
  Serial.println(*ms-*ams);
}

