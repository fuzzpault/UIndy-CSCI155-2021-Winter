/*
    Name: Paul Talaga
    Date: Mar 22, 2021
    Desc: Function demo
    Topics: return, passing parameters, pass by pointer, function scope
*/

#include <stdio.h>

int my_add_count = 0; // Global variable

int myAdd(int a, int b){
    my_add_count++;  // variable scope
    int i;
    printf("Hi, I'm in myAdd! Got %d %d\n", a, b);
    if( a == 0 && b == 0){
        printf("You entered two zeros!\n");
        return 100;
    }
    return a + b + 1;  //"It sets myadd to the value of  a + b."
    printf("I am here\n");
    
}

int main(){
    
    printf("Hi\n");
    
    int value = 10;
   
    printf("1 + 2 = %d \n", myAdd(value, 2) );
    printf("0 + 0 = %d \n", myAdd(value, 0) );
    printf("0 + 0 = %d \n", myAdd(value, 6) );
    printf("0 + 0 = %d \n", myAdd(value, 6) );
    
    printf("myAdd got called %d times.\n", my_add_count);
    
    return 0;
}