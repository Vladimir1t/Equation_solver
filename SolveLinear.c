#include "SolveLinear.h"

int SolveLinear (double b, double c, double* x1)
{
    assert (x1 != NULL);
    assert (isfinite (b));
    assert (isfinite (c));

    const int YES = 1, NO = 0;

    if (IsDoubleZero(b) == YES)
        return IsDoubleZero(c) ? Inf_ROOTS :
                                 No_ROOTS;
    else                    /* b!=0 */
    {
        *x1= -c/b;
        return One_Root;    /* one root */
    }
}

