#include "InputCoeff.h"

double InputCoeff (double* s)
{
    assert (s != NULL);

    while (scanf ("%lg", s) != 1)
    {
        printf ("try again \n");
        CleanBuffer ();
    }
}

