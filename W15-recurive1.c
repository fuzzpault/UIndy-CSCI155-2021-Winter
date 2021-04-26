/*
    Name: Paul Talaga
    Date: April 12, 2020
    Desc: Recursive function demo
    Class Video: 
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

// Returns the sum of all values in the list
int findSum(int numbers[], unsigned length){
    int ret = 0;
    for(int i = 0; i < length; i++){
        ret += numbers[i];
    }
    return ret;
}

int findSumRecurse(int numbers[], unsigned length){
    // Base case - sum of a list of one number is that number
    if(length == 1){
        return numbers[0];
    }else{
        // Recursive step - add the first element to the sum of the rest
        // Uses the fact that passing an array passes a pointer to the first
        // element, so to send the rest of the list (without the first element)
        // we can increment the pointer.
        return numbers[0] + findSumRecurse(numbers + 1,  length - 1);
    }
}

int exists(int numbers[], unsigned length, int to_find){
    // return 1 if to_find is in the list, 0 otherwise
    for(int i = 0; i < length; i++){
        //printf("%d %d\n", to_find, numbers[i]);
        if(to_find == numbers[i]){
            return 1;
        }
    }
    return 0;
}

int existsRecurse(int numbers[], unsigned length, int to_find){
   // 
   for(int i = 0; i < length; i++){
       printf("%d: %d\n", i, numbers[i]);
   }
   printf("\n");
   // Base case -
    if(length == 0){
        return 0;
    }else{
        // Recursive step - add the first element to the sum of the rest
        // Uses the fact that passing an array passes a pointer to the first
        // element, so to send the rest of the list (without the first element)
        // we can increment the pointer.
        if( numbers[0] == to_find ){ 
            return 1;
        }else{
            return existsRecurse(numbers + 1,  length - 1, to_find);
        }
    }
}

// A function to calculate the fibanocci number from the 'top down'
// 0 1 1 2 3 5 8 
int fib(int number){
    //printf("Finding f(%d)\n", number);
    if(number == 1){ //base case
        return 1;
    }else if(number == 2){
        return 1;
    }else{
        return fib(number - 1) + fib(number - 2);
    }
}

// An instrumented version to show recursion depth.
int fib2(int number, int depth){
    for(int i = 0; i < depth; i++){
        printf("  ");
    }
    printf("Finding f(%d)\n", number);
    if(number == 1){ //base case
        return 1;
    }else if(number == 2){
        return 1;
    }else{
        return fib2(number - 1, depth + 1) + fib2(number - 2, depth + 1);
    }
}

// An faster fib function that goes from the bottom up.
int fib3(int prev, int prevprev, int togo){
    printf("fib3 %d \n", togo);
    if(togo == 2){
        return prev + prevprev;
    }else{
        return fib3( prevprev, prev + prevprev, togo - 1);
    }
}

// Iterative version to reverse a list.
void reverse(int n[], unsigned length){
    int temp = 0;
    for(int i = 0; i < length/2; i++){
        temp = n[i];
        n[i] = n[length - 1 - i];
        n[length - 1 - i] = temp;
    }
}

// Recursive verstion to reverse a list
void reverseRecuse(int n[], int left, int right){
    if(left >= right){ // base case
        return;
    }else{
        int temp = n[left];
        n[left] = n[right];
        n[right] = temp;
        reverseRecuse(n, left + 1, right - 1);
        return;
    }
}

void print(int n[], unsigned length){
    printf("[ ");
    for(int i = 0; i < length; i++){
        printf("%d ", n[i]);
    }
    printf("]\n");
}

int main(){
    int s1[] = {1,2,3};
    int s2[] = {1,2,3,4,5,10};
    int s3[] = {-4,2,9,1,25};
   
    // Sum of a list of numbers
    /*
    
    assert( findSum(s1, 3) == 6);
    assert( findSumRecurse(s1, 3) == 6);
    
    assert( findSum(s2, 6) == 25);
    assert( findSumRecurse(s2, 6) == 25);
    
    assert( findSum(s3, 5) == 33);
    assert( findSumRecurse(s3, 5) == 33);
    
    // Does a number exist in the list?
    
    //assert(exists(s1, 3, 2) == 1);
    //assert(existsRecurse(s1, 3, 2) == 1);
    
    assert(exists(s2, 6, 10) == 1);
    assert(existsRecurse(s2, 6, 10) == 1);
    
    //assert(exists(s2, 6, 11) == 0);
    //assert(existsRecurse(s2, 6, 11) == 0);
    
    */
    // Reverse lists in-place
    
    print(s3,5);
    reverse(s3, 5);
    print(s3,5);
    reverseRecuse(s3, 0, 4);
    print(s3,5);
    return 0;
    assert(s1[0] == 3);
    assert(s1[1] == 2);
    assert(s1[2] == 1);
    
    reverse(s3, 5);
    assert(s3[0] == 25);
    assert(s3[1] == 1);
    assert(s3[2] == 9);
    assert(s3[3] == 2);
    assert(s3[4] == -4);

    
    
    //printf("f(10) = %d\n", fib(10));
    
    //printf("f(45) = %d\n", fib(45));
    
    //printf("f(7) = %d\n", fib2(7, 0));
    
    //printf("f(7) = %d\n", fib3(0, 1, 7));
    
    //printf("f(10) = %d\n", fib3(0, 1, 10));
    
    printf("f(45) = %d\n", fib3(0, 1, 45));
    
    
    return 0;
}