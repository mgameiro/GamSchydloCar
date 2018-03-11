#include "Matrix.h"


Matrix::Matrix(int lines, int columns){
  this->lines = lines;
  this->columns = columns;
  this->m = new double[this->lines*this->columns];
}

Matrix::~Matrix(){
  
}

