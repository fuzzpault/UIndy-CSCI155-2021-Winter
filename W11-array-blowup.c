/*
    Name: Paul Talaga
    Date: Mar 15, 2020
    Desc: Limiting line width
*/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 1000000000


int main(){
    //int arr[LENGTH];
    int* arr = (int*)malloc(LENGTH * sizeof(int));
    
    printf("Size bytes (MB) %d \n", LENGTH * 4 / 1024 / 1024);
    
    for(int i = 0; i < LENGTH; i++){
        arr[i] = i*2;
    } 
    
    for(int i = 0; i < LENGTH; i++){
        //printf("%d ", arr[i]);
    }
    
    return 0;
}