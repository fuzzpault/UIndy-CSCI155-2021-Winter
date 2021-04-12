/*
    Name: Paul Talaga
    Date: April 12, 2020
    Desc: Demo of using malloc to get memory from the OS
    
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()


int main(){
   

    int a = 42;
    // Get memory from the OS and use it as an array.
    int* c = (int*)malloc(sizeof(int) * 5 ); // Memory allocate in bytes
    int d[20] = {}; // {} initialized the array to all 0's
    printf("sizeof(int): %d \n", sizeof(int));
    
    printf("a: %d \n", a);
    
    printf("c: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    
    printf("d: ");
    for(int i = 0; i < 20; i++){
        printf("%d ", d[i]);
    }
    printf("\n");
    
    free(c);
   
}