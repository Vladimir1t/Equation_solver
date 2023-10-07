
#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001
#include "IsDoubleZero.h"

static const EPSILON = 0.001f;

int IsDoubleZero (double a)
{

    return (fabs (a) <= EPSILON);
}

int DoubleCompare (double firstDouble, double secondDouble)
{

  return (fabs (firstDouble - secondDouble) <= EPSILON);

}

