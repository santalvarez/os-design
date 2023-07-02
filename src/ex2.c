/* ex2.c - main, sndA, sndB */

#include "xinu.h"


void sndA(void), sndB(void);

void main(void) {
    resume(create(sndA, 1024, 20, "process 1", 0));
    resume(create(sndB, 1024, 20, "process 2", 0));
};


void sndA(void) {
    while(1)
        putc(CONSOLE, "A");
};


void sndB(void) {
    while(1)
        putc(CONSOLE, "B");
};


