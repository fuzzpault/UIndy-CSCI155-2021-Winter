/*
    Name: Paul Talaga
    Date: Feb 1, 2020
    Desc: Example of overflow.
*/

#include <stdio.h>

int main(){
    unsigned char num = 0;
    
    printf("size of num: %d\n", sizeof(num) );

    
    long long i = 0;
    for(i = 0; i < 3000; i++){
        printf("i: %d  num: %d %c \n",i, num, num);
        /*if(i % 1000000 == 0){  // To limit how often it prints, only print if the modulo is 0
            printf("i: %d  num: %d  \n",i, num);
        } */
        num = num + 1;
    }
    
    
    
    return 0;
}