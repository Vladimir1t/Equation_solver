#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#include "DoubleCompare.h"
#include "SolveSquare.h"
#include "nRoots.h"

struct TestData
{
    double a, b, c;
    double x1, x2;
    int nRoots;
};

int TestOne (const struct TestData* data, const size_t i);

int TestFile ();

//! Function includes the array of the reference roots and coefficients
//! Function counts how many tests are right
//! Return '1' if all tests are right or '2' if there are some mistakes

int TestAll ();

#endif // TEST_H_INCLUDED
