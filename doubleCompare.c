#include "DoubleCompare.h"

int DoubleCompare (double firstDouble, double secondDouble)
{
    return (fabs (firstDouble - secondDouble) <= EPSILON);
}

