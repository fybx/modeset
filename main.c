/*
 *      Ferit Yiğit BALABAN <f@fybx.dev>, 2022
 *
 *      modeset: main.c 
 *      https://github.com/fybx/modeset
 */

#include <stdio.h>
#include "utility.h"

int main(int argc, char* argv[]) {
    /* Completely ignore flags, for a while */
    argc = 0;
     
    if (!argc) {
        printf("modeset by fyb\n");
        printf("local machine time:  16.19\n");
        printf("current mode:        dark (f)\n");
        printf("current sink volume: 100\n");
    } else {
        
    }
    return(0);
}

