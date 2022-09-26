/*  
 *      Ferit Yiğit BALABAN <f@fybx.dev>, 2022
 *
 *      modeset: utility.h
 *      https://github.com/fybx/modeset
 */
#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED

/*
 * This function is borrowed from: http://www.cse.yorku.ca/~oz/hash.html
 */
unsigned long djb2(char *str);

unsigned long* getHashes(int, char**);

#endif
