#include "Test.h"

int TestOne (const struct TestData* data, const size_t i);
int TestFile ();
int TestAll ();

int TestAll()
{
    int nRightTests = 0;

    double a = 0;

    const struct TestData allData[] = {{.a = 1, .b = 0,  .c = -4, .x1 = 2,  .x2 = -2,   .nRoots = TWO_ROOTS},   /* test 1. b = 0 */
                                       {.a = 1, .b = -7, .c = 12, .x1 = 4,  .x2 = 3,    .nRoots = TWO_ROOTS},   /* test 2. d > 0 */
                                       {.a = 0, .b = 2,  .c = 4,  .x1 = -2, .x2 = 0,    .nRoots = ONE_ROOT },   /* test 3. a = 0 */
          /* x1 > x2 */                {.a = 1, .b = 2,  .c = 3,  .x1 = 0,  .x2 = 0,    .nRoots = NO_ROOTS },   /* test 4. d < 0 */
                                       {.a = 2, .b = 5,  .c = 0,  .x1 = 0,  .x2 = -2.5, .nRoots = TWO_ROOTS},   /* test 5. c = 0 */
                                       {.a = 0, .b = 2,  .c = 0,  .x1 = 0,  .x2 = 0,    .nRoots = INF_ROOTS}};  /* test 6. a = 0 c = 0 */

    const size_t SIZE = sizeof(allData) / sizeof(allData[0]);

    for (size_t i = 0; i < SIZE; i++)
    {
        nRightTests += TestOne(&allData[i], i);
    }
    printf ("Number of failed tests: %d\n", SIZE - nRightTests);
    return (nRightTests == SIZE);
}

int TestOne (struct TestData* dataRef, const size_t Number)
{
    double x1 = 0, x2 = 0;

    int nRoots = solveSquare (dataRef->a, dataRef->b, dataRef->c, &x1, &x2);

    if (DoubleCompare (x1, dataRef->x1) != 1 ||
        DoubleCompare (x2, dataRef->x2) != 1 ||
        DoubleCompare (nRoots, dataRef->nRoots) != 1)
    {
        printf ("Failed: x1 = %lg, x2 = %lg, nRoots = %d\n"
                "Expected: x1Ref = %lg, x2Ref = %lg, nRootsRef = %d\n",
                x1, x2, nRoots, dataRef->x1, dataRef->x2, dataRef->nRoots);

        printf ("Error in test number %d \n", Number + 1 );

        return 0;    /* Test failed */
    }

    return 1;        /* Test is OK */
}

int TestFile()       /* this function takes data from .txt file */
{
    size_t SizeF = 0;
    size_t nRightFileTests = 0;
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    int nRoots = 0;

    FILE *file = fopen ("TEST.txt", "r");   /* apply to data in file */

    do
    {
        printf("write the number of structures:\n");
    }
    while (scanf ("%d", &SizeF) != 1);

    TestData* dataPointer = (TestData*) calloc(SizeF, sizeof (TestData[0]));  ///

    for (size_t i = 0; i < SizeF; i++)
    {
        fscanf(file, "%lg %lg %lg %lg %lg %d", &dataPointer[i].a, &dataPointer[i].b,
        &dataPointer[i].c, &dataPointer[i].x1, &dataPointer[i].x2, &dataPointer[i].nRoots);
    }

    for (size_t i = 0; i < SizeF; i++)
    {
        nRightFileTests += TestOne(dataPointer[i], i);
    }
    printf ("Number of failed tests: %d\n", Size - nRightFileTests);

    return (nRightFileTests == Size);
}


