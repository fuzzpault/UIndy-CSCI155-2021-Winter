/*
    Name: <your name here>
    Date: April 5, 2021
    Desc: <fill me in>
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()

#define MAX_SIZE 100

int getValuesFromUser(int array[]){
    printf("Enter values with enter, with -99 as the ending signal.\n");
    for(int i = 0; i < MAX_SIZE; i++){
        int temp = 0;
        scanf("%d", &temp);
        if(temp == -99){
            return i; // Return the current length of numbers they entered
        }else{
            array[i] = temp;
        }
    }
    return MAX_SIZE;
}

int getRandomValues(int array[]){
    int numValues = 0;
    int minRand = 0;
    int maxRand = 0;
    printf("How many random numbers do you want? (1..100)\n");
    scanf("%d", &numValues);
    while(numValues < -1 || numValues > 100){
        printf("Invalid entry, enter a value from 1..100\n");
        scanf("%d", &numValues);
    }
    printf("What is the minimum random number you want?\n");
    scanf("%d", &minRand);
    printf("What is the maximum random number you want?\n");
    scanf("%d", &maxRand);
    for(int i = 0; i < numValues; i++){
        array[i] = (rand() % (maxRand - minRand + 1)) + minRand;
    }
    return numValues;
}

void printArray(int array[], int length){
    printf("\nArray contains: ");
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void rotateArray(int array[], int length){
    // We need length to know where to wrap
    int last = array[length - 1];
    for(int i = length - 2; i >= 0; i--){
        array[i+1] = array[i];
    }
    array[0] = last;
}

void multiplyArray(int array[]){
    int mult_value = 0;
    printf("What do you want to multiply every element by?\n");
    scanf("%d", &mult_value);
    // I guess it's fine to multiply the entire array
    for(int i = 0; i < MAX_SIZE; i++){
        array[i] = array[i] * mult_value;
    }
}

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
        printf("6) Multiply ?\n");
        
        scanf("%d", &choice);
        
        if (choice < 1 || choice > 6){
            printf("Invalid choice!\n");
        } else if(choice == 1){ // Exit
            printf("Exiting program.\n");
        } else if(choice == 2){ // Enter Values - Use -99 to signal the end of values.
            current_size = getValuesFromUser(values);
        } else if(choice == 3){ // Random Values - allow user to pick how many to fill with, min, and max rand should work with.
            current_size = getRandomValues(values);
        } else if(choice == 4){ // Print - However you want.
            printArray(values, current_size);
        } else if(choice == 5){ // Rotate - Move all values to the right, with the last element going to the first spot.
            rotateArray(values, current_size);
        } else if(choice == 6){ // Multiply - Allow the user to enter a number and change the list so the result
                                // is the original number multiplied by whatever they provided.
            multiplyArray(values);
        }
    } while (choice != 1);
    
    printf("Thanks for playing!\n");
}