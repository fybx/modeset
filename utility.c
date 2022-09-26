/*
 *      Ferit Yiğit BALABAN <f@fybx.dev>, 2022
 *
 *      modeset: utility.c 
 *      https://github.com/fybx/modeset
 */
#include <stdlib.h>
#include "utility.h"

unsigned long djb2(char *str) {
    unsigned long hash = 5381;  
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}

unsigned long* getHashes(int sList, char** lStrings) {
    unsigned long* hashes;
    int iter;

    hashes = calloc(sList, sizeof(unsigned long));
    iter = 0;

    for(; iter < sList; iter++)
        *(hashes + iter) = djb2(*(lStrings + iter));
    return hashes;
}
