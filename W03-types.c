/*
    Name: Paul Talaga
    Date: Feb 1, 2020
    Desc: Variable types
*/

#include <stdio.h>

int main(){
    double price = 5.65;
    float price2 = 5.65;
    
    printf("Price1: %lf %lf\n", price, price2);
    printf("size of price: %d, price2: %d \n", sizeof(price), sizeof(price2) );
    // sizeof returns the number of bytes that variable takes in memory.
    
    
    char b = 'b';  // A single character [-128 to 127]
    char name[5];
    int number = 0;
    /*printf("number: %d\n", number);
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hi %s, it's nice to meet you!\n", name);
    
    printf("number: %d\n", number);
    */
    
    
    long anotherNumber = 0;
    printf("size of long: %d \n", sizeof(anotherNumber) );
    long long yetAnotherNumber = 0;
    printf("size of long long: %d \n", sizeof(yetAnotherNumber) );
    
    //int number;
    unsigned  thing;  // unsinged int 
    
    
    
    /* "bob" */
    
    return 0;
}