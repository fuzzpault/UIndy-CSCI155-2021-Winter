/*
    Name: Paul Talaga
    Date: Jan 25, 2020
    Desc: Printf and value examples.
*/

#include <stdio.h>

int main(){
    int  cost = 11;
    cost = cost * 100;
    
    printf("Hello World! %d more over here! %d\n", cost, cost * 10);
    printf("%d + %d = %d \n", cost, cost, cost + cost);
    printf("%d * %d = %d \n", cost, 3, cost * 3);
    printf("%d - %d = %d \n", cost, 3, cost - 3);
    printf("%d / %d = %d \n", cost, 2, (cost / 2)   );
    // Note integer division rounds down since no fraction is possible.
    // Best to 'make big'(multiply) before 'making small'(divide)
    printf("%d mod %d = %d \n", cost, 2, cost % 2   );
    
    // Other formatting strings are possible, see http://www.cplusplus.com/reference/cstdio/printf/
    printf("%x %s\n", cost, "over here");
    
    return 0;
}