/*
    Name: Paul Talaga
    Date: Mar 1, 2021
    Desc: Searching for characters in a string.
*/

#include <stdio.h>
#include <string.h>

int main(){

    char input[50];    //['a','b','\0','d']  "bob"
    char search[50];                         //"ae"
    
    
    int searchCount = 0;
    int i = 0;
    int j = 0;

    printf("Enter a string:");
    scanf("%s", input);
    
    printf("Enter characters to search for:");
    scanf("%s", search);
    
    for(i = 0; i <strlen(input); i++){
        printf("Looking at %c\n", input[i] );

        for(j = 0; j < strlen(search) ; j++){
            if(input[i] == search[j]){
                searchCount++;
            }
            printf("  Comparing %c to %c  vowelCount: %d\n", input[i], search[j], searchCount);
        }
    }
    
    printf("There were %d letter of %s in %s.\n", searchCount,search, input);
    
   
    return 0;
}