/*
    Name: Paul Talaga
    Date: Feb 1, 2020
    Desc: Class demo for bool variables.
          Remember a bool is really just an integer.
          For number (ex: int) 0 is false, anything else is true.
*/

#include <stdio.h>
//#include <stdbool.h>  // Use this include or below

typedef int bool; // int is 4 bytes -> 32 bits
#define false 0     // True/False -> two options, so can be stored as 1 bit.
#define true 1

int main(){
    
    bool pizza = true;
    
    if(pizza){
        printf("We are having pizza!\n");
    }else{
        printf("Why aren't you having pizza?\n");
    }
    
    return 0;
}