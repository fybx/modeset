/*
 *      Ferit Yiğit BALABAN <f@fybx.dev>, 2022
 *
 *      modeset: main.c 
 *      https://github.com/fybx/modeset
 */

#include <stdio.h>
#include "utility.h"

int main() {
    int p = 0;
    int r = testFunction(5, &p);
    printf("testFunction(5, &p);\nReturns: %d\np: %d", r, p);
    return(0);
}

