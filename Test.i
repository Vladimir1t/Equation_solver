# 1 "Test.c"
# 1 "<command-line>"
# 1 "Test.c"



# 1 "doubleCompare.h" 1



int DoubleCompare(double firstDouble, double secondDouble);
# 5 "Test.c" 2
# 1 "solveSquare.h" 1



int solveSquare (const double a,const double b,const double c, double* x1, double* x2);
# 6 "Test.c" 2
# 1 "Test.h" 1
# 7 "Test.c" 2

enum nRoots
{
    INF_ROOTS = -1,
    NO_ROOTS = 0,
    ONE_ROOT = 1,
    TWO_ROOTS = 2,
};

struct TestData
{
    double a, b, c;
    double x1, x2;
    int nRoots;
};

int TestOne (struct TestData data, const int i);
int TestFile ();





int TestAll()
{
    int nRightTests = 0;

    double a = 0;

    struct TestData allData[]= {{.a = 1, .b = 0, .c = -4, .x1 = 2, .x2 = -2, .nRoots = TWO_ROOTS},
                                {.a = 1, .b = -7, .c = 12, .x1 = 4, .x2 = 3, .nRoots = TWO_ROOTS},
                                {.a = 0, .b = 2, .c = 4, .x1 = -2, .x2 = 0, .nRoots = ONE_ROOT},
                                {.a = 1, .b = 2, .c = 3, .x1 = 0, .x2 = 0, .nRoots = NO_ROOTS},
                                {.a = 2, .b = 5, .c = 0, .x1 = 0, .x2 = -2.5, .nRoots = TWO_ROOTS},
                                {.a = 0, .b = 2, .c = 0, .x1 = 0, .x2 = 0, .nRoots = INF_ROOTS}};

    const int SIZE = sizeof(allData)/ sizeof(allData[1]);

    for (int i = 0; i < SIZE; i++)
    {
      nRightTests += TestOne(allData[i], i);
    }

    return (nRightTests == SIZE);
}

int TestOne (struct TestData dataRef, const int Number)
{

    double x1 = 0, x2 = 0;

    int nRoots = solveSquare (dataRef.a, dataRef.b, dataRef.c, &x1, &x2);

    if (DoubleCompare(x1, dataRef.x1) != 1 ||
        DoubleCompare(x2, dataRef.x2) != 1 ||
        DoubleCompare(nRoots, dataRef.nRoots) != 1)
    {
      printf ("Failed: x1 = %lg, x2 = %lg, nRoots = %d\n"
       "Expected: x1Ref = %lg, x2Ref = %lg, nRootsRef = %d\n",
       x1, x2, nRoots, dataRef.x1, dataRef.x2, dataRef.nRoots);
      printf ("Error in test number %d \n", Number + 1 );

      return 0;
    }
    else
    {
      return 1;
    }
}

int TestFile()
{

    const int Size = 4;
    int nRightFileTests = 0;

    FILE *file = fopen ("TEST.txt", "r");
    TestData Data[4] = {};

    for (int i = 0; i < Size; i++)
    {
      fscanf(file, "%lg %lg %lg %lg %lg %d", &Data[i].a, &Data[i].b,
      &Data[i].c, &Data[i].x1, &Data[i].x2, &Data[i].nRoots);
    }

    for (int i = 0; i < Size; i++)
    {
      nRightFileTests += TestOne(Data[i], i);
    }

    return (nRightFileTests == Size);

}
