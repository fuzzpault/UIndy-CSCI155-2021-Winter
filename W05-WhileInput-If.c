/*
    Name: Paul Talaga
    Date: Feb 15, 2020
    Desc: Using a while loop to allow the user to enter again.
          Using a break to exit a loop.
*/

#include <stdio.h>

int main(){

    int i = 0;
    int attempts = 0;

    printf("Enter a number >=0 and <= 100:");
    scanf("%d", &i);
    while(i < 0 || i > 100){
        if(i > 200){
            printf("That's way off!\n");
        }
        if(i == 1024){
            printf("That's the secret!\n");
            break;
        }
        printf("%d is not [0..100] Please try again:", i);
        scanf("%d", &i);
        attempts++;
        
    }
    // Post- loop invariant -> (i < 0 || 0 > 100) must be false! (or break)
    
    printf("Congratulations, %d is within range! It took you %d attempts. \n", i, attempts);
    
    return 0;
}