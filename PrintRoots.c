#include "PrintRoots.h"

void PrintRoots (int nRoots, double* x1, double* x2)
{
    switch (nRoots)
    {
      case ONE_ROOT:
          printf ("one root: x = %lg\n", *x1);
          break;
     case TWO_ROOTS:
          printf ("two roots: x1 = %lg, x2 = %lg\n", *x1, *x2);
          break;
      case INF_ROOTS:
          printf ("root is any number\n");
          break;
      case NO_ROOTS:
          printf ("no roots\n");
          break;
      default:
          printf ("error, program didn't complete\n");
          break;
    }
}

