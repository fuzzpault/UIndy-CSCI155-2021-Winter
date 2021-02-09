/*
    Name: Paul Talaga
    Date: Feb 8, 2020
    Desc: Class demo for conditionals.
*/

#include <stdio.h>

int main(){
    
    int number = 0;
    
    printf("Give me a number between 0 and 100:\n");
    
    scanf("%d", &number);
    
    if(number % 2 == 0 && number != 0){
        printf("%d number is even!\n", number);
    }else if(number == 0){
        printf("0 is neither even or odd\n");
    }else{
        printf("%d is odd!\n", number);
    }
    
    // else if is optional and can have many many of them
    // else is optional
    // Execution (checking) from top-down.
    
    return 0;
}