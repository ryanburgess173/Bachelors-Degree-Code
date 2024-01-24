// C Programming doesn't allow you to return an entire array
// You return a pointer to an array :)

#include <stdio.h>

// Single dimension example below

int * getRandom(){
    static int r[10];
    int i;

    /* set the seed */
    srand((unsigned)time(NULL));

    for(i = 0; i<10; ++i){
        r[i] = rand(); // undeclared ??
        printf("r[%d] = %d\n", i, r[i]);
    }
    return r;
}

int main(){
    int *p;
    int i;

    p = getRandom();

    for(i=0; i<10; i++){
        printf("*(p+%d) : %d\n", i, *(p+i));
    }
    return 0;
}