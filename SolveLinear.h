#ifndef SOLVELINEAR_H_INCLUDED
#define SOLVELINEAR_H_INCLUDED

#include <math.h>
#include <assert.h>

#include "doubleCompare.h"

enum NUMBER_OF_ROOTS
{
    Inf_ROOTS = -1,
    No_ROOTS  =  0,
    One_Root  =  1,
};

//! b [in] - first coefficient
//! a [in] - second coefficient
//! x1 [out] - the root
//! return roots and number of roots

int SolveLinear (double b, double c, double* x1);

#endif // SOLVELINEAR_H_INCLUDED
