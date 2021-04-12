/*
	Name: Paul Talaga
	Date: April 10, 2021
	Desc: Pointer practice for HW
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Part 1
	// Draw memory.
	
	int apple = 2;
	int banana = 56;
	int clementine[] = {1,2,3,4,5,6,7,8,9,10};
	int* date = NULL;
	int* elderberry = NULL;
	int* grape[3] = {};
	int* orange = (int*)malloc(sizeof(int) * 5);
	
	date = &apple;
	clementine[5] += banana;
	banana = *date;
	elderberry = clementine + 3;
	grape[1] = date;
	date = &banana;
	*elderberry = apple;
	orange[0] = 1;
	orange[1] = *elderberry;
	orange[2] = *(grape[1]);
	orange[3] = clementine[5];
	orange[4] = *(orange + 2);
	clementine[2] = *(clementine);
	grape[0] = date;
	grape[2] = &(orange[2]);
	
	//This is the same!  bob[3]   ===  *(bob + 3)
	
	// Print everything out to the screen
	
	printf("apple: %d \n", apple);
	printf("banana: %d \n", banana);

	printf("clementine: ");
	int i = 0; 
	for(i = 0; i < 10; i++){
		printf("%d ", clementine[i]);
	}
	printf("\n*date: %d \n", *date);
	printf("*elderberry: %d \n", *elderberry);

	printf("grape: ");
	for(i = 0; i < 3; i++){
		printf("%d ", *(grape[i]));
	}
	
	printf("\n");

	printf("orange: ");
	for(i = 0; i < 5; i++){
		printf("%d ", orange[i]);
	}
	
	printf("\n");

	free(orange);
	return 0;
}