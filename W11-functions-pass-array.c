/*
    Name: Paul Talaga
    Date: Mar 22, 2021
    Desc: Function demo
    Topics: return, passing parameters, pass by pointer, function scope
*/

#include <stdio.h>

char someing_else;

// return the sum of the values in the array
int getSum(int* array, unsigned length){ 
//int getSum(int array[], unsigned length){ 
    int sum = 0;
    for(int i = 0; i < length; i++){
        //sum += array[i]++; // post-increment
        //sum += ++array[i]; // pre-increment
        sum += array[i];
    }
    return sum;
}

void printList(int* array, unsigned length){
     for(int i = 0; i < length; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}


int main(){
    
   int list[] = {1,5,3,4,5};  //{2,6,4,5,6}
   
   printList(list, 5);
   printf("Sum: %d \n", getSum(list, 5) );
   printf("Sum: %d \n", getSum(list, 5) );
   
  
    
    return 0;
}