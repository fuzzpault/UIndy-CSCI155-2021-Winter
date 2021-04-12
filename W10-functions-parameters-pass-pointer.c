/*
    Name: Paul Talaga
    Date: Mar 22, 2021
    Desc: Function demo
    Topics: return, passing parameters, pass by pointer, function scope
*/

#include <stdio.h>

char someing_else;

int myAdd(int a, int b, int* mac){ // mac is pass by pointer!
    printf("1st %x %d *mac %d\n", mac, mac, *mac);
    *mac = *mac + 1;
    printf("2nd %x %d *mac %d\n", mac, mac, *mac);  
    
    printf("Hi, I'm in myAdd! Got %d %d\n", a, b);
    if( a == 0 && b == 0){
        int u = 68;
        printf("this is that %x", this);
        printf("You entered two zeros!\n");
        return 100;
    }
    a = a + 100;
    return a + b + 1;  //"It sets myadd to the value of  a + b."
    printf("I am here\n");
    
}

int main(){
    
    printf("Hi\n");
    
    int my_add_count = 0; 
    //int mac = -1;
    
    int value = 10;
   
    printf("1 + 2 = %d \n", myAdd(value, 2, &my_add_count) ); // int*
    printf("0 + 0 = %d \n", myAdd(value, 0, &my_add_count) );
    printf("0 + 0 = %d \n", myAdd(value, 6, &my_add_count) );
    printf("0 + 0 = %d \n", myAdd(value, 6, &my_add_count) );
    
    printf("myAdd got called %d times.\n", my_add_count);
    
    return 0;
}