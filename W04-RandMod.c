/*
    Name: Paul Talaga
    Date: Feb 8, 2020
    Desc: Class demo using rand() to decide which branch of
          a conditional to take using probability.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()

int main(){
    srand((int)time(0)); // Unique seed
    
    int r = rand() % 100;
    
    printf("Number is %d\n", r);
    
    
    if(r < 10){ // Since r is in the range [0..99] and rand is uniform,
        printf("Pop quiz day!\n");  // a Pop quiz has a 10% chance of happening.
    }else{
        printf("No quiz today\n");
    }
    
    
    
    return 0;
}