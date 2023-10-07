#ifndef CHECKINPUT_H_INCLUDED
#define CHECKINPUT_H_INCLUDED
#include <stdio.h>
#include <assert.h>

#include "CleanBuffer.h"

enum MOD
{
    Test         =  0,
    Degree_1     =  1,
    Degree_2     =  2,
};

void CheckInput (int* degree);

#endif // CHECKINPUT_H_INCLUDED
