#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED


/* Basic implementation of a simple matrix manipulation library
 *  in cplusplus. The objetives are for it to be fast and
 *  lightweight for arduino usage. It is implemented just a core
 *  of most important functions in this specific usage.
 */

 /* Matrix format implementation:
  *  
  */


class Matrix{
  int lines, columns;
  double *m;

  public:
    Matrix(int lines, int columns);
    ~Matrix();
  private:
}


#endif
