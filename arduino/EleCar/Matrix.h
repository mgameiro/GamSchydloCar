#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include "Arduino.h"


/* Basic implementation of a simple matrix manipulation library
 *  in cplusplus. The objetives are for it to be fast and
 *  lightweight for arduino usage. It is implemented just a core
 *  of most important functions in this specific usage.
 */

 /* Matrix format implementation:
  *  Matrix is allocated all in one vector for speed of execution
  *  and simplicity at pointer operations. A 2x2 matrix would be
  *  placed in memory this way: [m11 m12 m21 m22];
  */


class Matrix{
  int lines, columns;
  double *m;

  public:
    Matrix(int lines, int columns);
    Matrix *add(Matrix *M1, Matrix *M2);
    void testPerform();
    ~Matrix();


  private:
  
};


#endif
