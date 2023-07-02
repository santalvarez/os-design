/* ex4.c - main, produce, consume */

#include "xinu.h"


void produce(void), consume(void);


int32 n = 0; // shared global variable

void main(void) {
    resume(create(consume, 1024, 20, "cons", 0));
    resume(create(produce, 1024, 20, "prod", 0));
};

void produce(void) {
    int32 i;
    for(i = 0; i < 1000; i++) {
        n++;
    };
};

void consume(void) {
    int32 i;
    for(i = 0; i < 1000; i++) {
        printf("n = %d\n", n);
    };
};
