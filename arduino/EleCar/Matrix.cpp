#include "Matrix.h"


Matrix::Matrix(int lines, int columns){
  // Init base parameters of the matrix
  this->lines = lines;
  this->columns = columns;
  // Allocate double pointer
  this->m = new double[this->lines*this->columns];
}

Matrix *Matrix::add(Matrix *M1, Matrix *M2){
  Matrix *M;
  int i;

  // Allocate the new matrix
  M = new Matrix(M1->lines,M1->columns);

  // Sum every element
  for (i=0; i < M1->lines; i++){
      M->m[i] = M1->m[i] + M2->m[i];
  }

  return M;
}

void Matrix::testPerform(){
  Matrix *M1, *M2, *M;
  unsigned long ams, ms;

  // Allocate new matrices
  ams = millis();
  M1 = new Matrix(3,3);
  M2 = new Matrix(3,3);
  ms = millis();
  Serial.print("Matrix alloc: ");
  Serial.print(ms-ams);
  Serial.println(" ms");

  // Add new matrices
  ams = millis();
  M = M1->add(M1,M2);
  ms = millis();
  Serial.print("Matrix add: ");
  Serial.print(ms-ams);
  Serial.println(" ms");
}

Matrix::~Matrix(){
  
}

