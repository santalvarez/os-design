/* ex3.c - main, sndch */

#include "xinu.h"

void sndch(char);


void main(void) {
    resume(create(sndch, 1024, 20, "process 1", 1, 'A'));
    resume(create(sndch, 1024, 20, "process 2", 1, 'B'));
};


void sndch(char ch) {
    while(1)
        putc(CONSOLE, ch);
};

