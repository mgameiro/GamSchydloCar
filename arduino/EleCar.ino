double calculateSpeed(double Ua, double Ia){
  // Calculate the car speed from voltage and current
  double w;
  
  w = (Ua-Ra*Ia)/Kf;
  v = w*R;
  return v;
}

double readOutputVoltage(){
  // read the value of voltage at output
  
}

void setup() {
  // put your setup code here, to run once:

  // DC Motor constants
  const double Ra = 7.5;
  const double Kf = 1.1234;
  const double Kt = 0.8827;
  // Car physical constants
  const double M = 0.5;
  const double R = 0.003;
}

void loop() {
  // put your main code here, to run repeatedly:

}
