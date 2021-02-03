/*
    Name: Paul Talaga
    Date: Jan 16, 2020
    Desc: Outputs verious statistics about a semester.
*/

#include <stdio.h>

int main(){
    int totalClassHours = 16;
    
    printf("For a 2-credit course, there are %d hours in class, or %d minutes per semester.", 2 * 15, 2 * 15 * 60);
    printf("\n\n");
    
    printf("For a 3-credit course, there are %d hours in class, or %d minutes per semester.", 3 * 15, 3 * 15 * 60);
    printf("\n\n");
    
    printf("For a 4-credit course, there are %d hours in class, or %d minutes per semester.", 4 * 15, 4 * 15 * 60);
    printf("\n\n");
    
    printf("Assuming you're taking %d class hours this semester, you will spend %d hours per week on schoolwork.", totalClassHours, totalClassHours * 2);
    
    printf("\n\n");
    
    return 0;
}