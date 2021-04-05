/*
    Name: <your name here>
    Date: April 5, 2021
    Desc: <fill me in>
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()

#define MAX_SIZE 100

// Fill in any functions you want to write here

int main(){
    
    srand((int)time(0)); // Unique seed
    int choice = 0;
    int values[MAX_SIZE];
    int current_size = 0;
    do {
        printf("\nWhat do you want to do?\n");
        printf("1) Exit\n");
        printf("2) Enter up to 100 integers, end with -99.\n");
        printf("3) Initialize with random numbers.\n");
        printf("4) Print the array of values.\n");
        printf("5) Rotate right by 1.\n");
        printf("6) IsDivisible ?\n");
        
        scanf("%d", &choice);
        
        if (choice < 1 || choice > 6){
            printf("Invalid choice!\n");
        } else if(choice == 1){ // Exit
            // Fill  this in
        } else if(choice == 2){ // Enter Values - Use -99 to signal the end of values.
            // Fill  this in with your function
        } else if(choice == 3){ // Random Values - allow user to pick how many to fill with, min, and max rand should work with.
            // Fill  this in with your function
        } else if(choice == 4){ // Print - However you want.
            // Fill  this in with your function
        } else if(choice == 5){ // Rotate - Move all values to the right, with the last element going to the first spot.
            // Fill  this in with your function
        } else if(choice == 6){ // Multiply - Allow the user to enter a number and change the list so the result
                                // is the original number multiplied by whatever they provided.
            // Fill  this in with your function
        }
    } while (choice != 1);
    
    printf("Thanks for playing!\n");
}