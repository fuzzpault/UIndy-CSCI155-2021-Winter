/*
    Name: Paul Talaga
    Date: April 12, 2020
    Desc: Pointer demo - See video for drawings of memory.
    Class Video: 
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()


int main(){
   

    int a = 0;
    int* b = NULL;
    b = &a;
    
    printf("a: %d \n", a);
    
    *b = 10;
    
    printf("a: %d \n", a);
    

    
    printf("a: %d \n", a);
    
    b = NULL; // NULL actually has the value 0 but is a pointer type.
    printf("b: %d \n", b);
    *b = 20;
    
    return 0;
}