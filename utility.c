/*
 *      Ferit Yiğit BALABAN <f@fybx.dev>, 2022
 *
 *      modeset: utility.c 
 *      https://github.com/fybx/modeset
 */
#include "utility.h"

int testFunction(int proto, int* proto2) {
    *proto2 = proto;
    return proto++;
}
