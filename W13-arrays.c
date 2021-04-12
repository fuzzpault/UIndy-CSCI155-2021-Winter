/*
    Name: Paul Talaga
    Date: April 12, 2020
    Desc: Pointer demo
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()


int main(){
   

    int a = 42;
    int* b = NULL;
    b = &a;
    
    printf("*b: %d \n", *b);
    printf("b: %d \n", b);
    
    printf("a: %d \n", a);
    int c[5] = {5,6,7,8,9};
    
    printf("c: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    
    printf("*c: %d \n", *c);
    printf("*(c+1): %d \n", *(c+1));
    printf("*(c+2): %d \n", *(c+2));
    printf("*(c+4): %d \n", *(c+4));
    printf("c[4]: %d \n", c[4]);
    // Notice you can print out memory outside they array
    // But you never should change it or your program may not
    // run afterward!
    printf("c[5]: %d \n", c[5]);
    printf("c[6]: %d \n", c[6]);
    printf("*(c-1)]: %d \n", *(c-1));
}