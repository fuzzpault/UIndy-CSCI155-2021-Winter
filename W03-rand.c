/*
    Name: Paul Talaga
    Date: Feb 1, 2020
    Desc: Rand demo
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()

int main(){
    srand((int)time(0)); // Unique seed
    //printf("Price1: %d\n", rand());
    
    //printf("[0-100]: %d \n", rand() % 101);
    
    //printf("[100-200]: %d \n", (rand() % 101)  + 100);
    
    int i = 0;
    for(i = 0; i < 100; i++){
        printf("%d\n", (rand() % 101));
    }
   
    
    
    
    
    return 0;
}