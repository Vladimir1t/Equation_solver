#include "CleanBuffer.h"

void CleanBuffer()
{
    int symbol = 0;

    do
    {
        symbol = getchar();
    }
    while (symbol != '\n' && symbol != EOF);
}
