#include "CheckInput.h"

void CheckInput (int* degree)
{
    assert (degree != NULL);

    while(*degree != DEGREE_1 ||
          *degree != DEDREE_2 ||
          *degree != TEST));
    {
        printf ("Error. Wrong choice\n");
        ModNumber = scanf ("%d", degree);

        CleanBuffer ();
    }

    CleanBuffer ();
}
