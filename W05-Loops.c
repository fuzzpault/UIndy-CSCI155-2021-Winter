/*
    Name: Paul Talaga
    Date: Feb 15, 2020
    Desc: Loops - While - For - Do while
*/

#include <stdio.h>


int main(){
    
    // While - repeated execution statement - while something is true keep doing
    //       - When we don't know how many times it has to loop.
    //       - Getting input from the user
    // For   - repeated execution statement - counting - 
    //       - When do DO know how many times it should loop for
    
    int i = 0;
    int j = 0;
    
    // for( precondition ; condition ; update){
    //  loop body   
    // }
    // Execution:  precondition -> condition(true) -> loop body -> update
    //                   condition(true) -> loop body -> update ..
    //           When condition is false, it exits the loop
    for(i = 0; i < 10; i++){
        printf("%d Here!\n", i);
    }
    
    /*for(i = 0; 1 ; i++){ // Infinite loop - conditional is always true
        printf("%d 1 in condition\n", i);
    } */
    
    
    for(i = 0; j < 10 ; i++){ // Infinite loop - conditional is always true
        printf("%d other one\n", j);
        j++;
    }
    
    return 0;
}