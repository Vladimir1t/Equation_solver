#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "InputCoeff.h"
#include "PrintInstructions.h"
#include "solveSquare.h"
#include "Test.h"
#include "SolveLinear.h"
#include "PrintRoots.h"
#include "CleanBuffer.h"
#include "CheckInput.h"

enum Mod
{
    TEST         =  0,
    DEGREE_1     =  1,
    DEGREE_2     =  2,
    ERROR        =  3,
    NOT_SELECTED = -1,
};

//! Program solves quadratic or linear equation according to user's choice
//! a [in] the first coefficient of quadratic equation
//! b [in] the second coefficient of quadratic equation
//! c [in] the third coefficient of quadratic equation
//! k [in] the first coefficient of quadratic equation
//! p [in] the second coefficient of quadratic evaluation
//! nRoots [out] number if the roots
//! x1 [out] the first or only root of the equation
//! x2 [out] the second root of the evaluation
//! return roots and their number

int main()                               /// -t: test, -l: linear, -s: square
{
    PrintInstructions();                 /* print requirements and instructions */

    double a = 0,b = 0, c = 0;           /* coefficients of square equation */
    double x1 = 0, x2 = 0;               /* Roots */
    int nRoots = ERROR;                  /* number of roots */
    int degree = NOT_SELECTED;           /* number of choice */

    CheckInput (&degree);

    switch (degree)
    {
        case DEGREE_1:
            printf ("you chose linear equation solver\n");   /* solve linear equation */
            printf ("Enter coefficients b, c:\n");

            InputCoeff (&b);
            InputCoeff (&c);

            nRoots = SolveLinear (b, c, &x1);
            break;

        case DEGREE_2:
            printf ("you chose square equation solver\n");   /* solve square evaluation */
            printf ("Enter coefficients a,b,c:\n");

            InputCoeff (&a);
            InputCoeff (&b);
            InputCoeff (&c);

            nRoots = solveSquare (a, b, c, &x1, &x2);
            break;

        case TEST:                                           /* test of solveSquare and linearSquare */
            printf ("you chose Test\n");

            if (TestAll() + TestFile() == 2)
            {
                printf("Test is Ok\n");
                return 0;
            }

            printf("Test failed\n");
            return 0;

        default:
            printf("Error. Wrong choice\n");                 /* Error */
    }

    PrintRoots (nRoots, &x1, &x2);                         /* Return roots */

    return 0;
}






