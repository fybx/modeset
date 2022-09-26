/*
 *      Ferit Yiğit BALABAN <f@fybx.dev>, 2022
 *
 *      modeset: main.c 
 *      https://github.com/fybx/modeset
 */
#include <stdio.h>
#include "utility.h"

#define CLOGIN    210719733950
#define CLOCK     6385446350
#define CUNLOCK   6954102438929
#define CSHUTDOWN 7572924928492385
#define CSETL     6385687581
#define CWALLP    210732281509
#define CWALLC    210732281496

int main(int argc, char* argv[]) {
    /* Completely ignore flags, for a while */
    int fQuiet = 0; /* No output to stdout when set */
    int fDark = 0; /* Force set color scheme mode to dark */
    int fLight = 0; /* Force set color scheme mode to light */
    argc = 0;
    
    {"login", "lock", "unlock", "shutdown", "setl", "wallp", "wallc"};

    if (!argc) {
        printf("modeset by fyb\n");
        printf("local machine time:  16.19\n");
        printf("current mode:        dark (f)\n");
        printf("current sink volume: 100\n");
    } else {
        
    }
    return(0);
}

