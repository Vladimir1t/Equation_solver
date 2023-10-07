#ifndef ISSOLVESQUARE_H_INCLUDED
#define ISSOLVESQUARE_H_INCLUDED

#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "doubleCompare.h"
#include "SolveLinear.h"

enum nROOTS
{
    Inf_Roots = -1,
    No_Roots  =  0,
    ONE_Root  =  1,
    TWO_Roots =  2
};

//! Function solves square equation
//! a [in] - coefficient
//! b [in] - coefficient
//! c [in] - coefficient
//! d - discriminant
//! x1 [out] - the first root
//! x2 [out] - the second root
//! return roots and number of roots

int solveSquare (const double a,const double b,const double c, double* x1, double* x2);

#endif // SOLVESQUARE_H_INCLUDED
