/*
    Name: Paul Talaga
    Date: Feb 15, 2020
    Desc: Rain example program.
*/

#include <stdio.h>

int main(){

    int inches = 0;

    printf("How many inches of rain is predicted:");
    scanf("%d", &inches);
    while(inches < 0){
        printf("%d isn't going to work. Please try again:", inches);
        scanf("%d", &inches);
    }
    
    //  Raiiiiiiiiiiiin!   12 inches of rain.
    //  Rain!    1 inch of rain
    //  Ran! 0 inches of rain
    printf("Ra");
    // inches counts down
    /*while( inches ){
        printf("i");
        inches--;
    }*/
    int counter = 0;
    // Counter will go up from 0 until it reaches inches
    /*for(counter = 0; counter < inches ;counter++){
        printf("i");
    } */
    
    for( ; inches > 0 ; ){
        printf("I");
        inches--;
    }
    
    printf("n!\n");
    
    
   
    
    return 0;
}