/*
    Name: Paul Talaga
    Date: Mar 22, 2021
    Desc: Function demo
    Topics: return, passing parameters, pass by pointer, function scope
*/

#include <stdio.h>

int myAdd(int a, int b){
    printf("Hi, I'm in myAdd! \n");
    if( a == 0 && b == 0){
        printf("You entered two zeros!\n");
        return 100;
    }
    return a + b + 1;  //"It sets myadd to the value of  a + b."
    printf("I am here\n");
    
    // Call a funtion with the provided parameters, jump execution to the function,
    // execute code of the fuction, up until there aren't any lines of code or a
    // return is hit.
}

int main(){
    
    printf("Hi\n");
    
    return 0;
   
    printf("1 + 2 = %d \n", myAdd(1,2) );
    printf("0 + 0 = %d \n", myAdd(0,0) );
    
    
    return 0;
}