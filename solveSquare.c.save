#include "SolveEquation.h"

int solveSquare (const double a, const double b, const double c, double* x1, double* x2);
int SolveLinear (double b, double c, double* x1);

int solveSquare (const double a, const double b, const double c, double* x1, double* x2)
{
    assert (x1 != NULL);
    assert (x2 != NULL);
    assert (x1 != x2);

    assert (isfinite (a));
    assert (isfinite (b));
    assert (isfinite (c));

    if (IsDoubleZero(a))
        return SolveLinear(b, c, x1);

    else                             /* (if a != 0) */
    {
        double d = b*b-4*a*c;        /* discriminant */

        if (IsDoubleZero(d))         /* one root */
        {
            *x1 = -b/(2*a);
            return (ONE_Root);
        }
        else if (d < 0)              /* no roots */
            return (No_Roots);

        double sqrtD = sqrt(d);
        *x1 = (-b+sqrtD)/(2*a);
        *x2 = (-b-sqrtD)/(2*a);

        return (TWO_Roots);          /* two roots */
     }
}

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

