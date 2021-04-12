/*
    Name: Paul Talaga
    Date: April 12, 2020
    Desc: Challenge to draw memory from code.  See video:
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()


int main(){
   

    int a = 42;
    int* b = NULL;
    int c[5] = {5,6,7,8,9};
    
    b = &a;
    *b = c[1];
    *(c+2) = 9;
    b = c;
    *b = 22;
    
    printf("a: %d \n", a);
    
    printf("*b: %d \n", *b);
    
    printf("c: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
   
}