/*
    Name: Paul Talaga
    Date: Feb 8, 2020
    Desc: RPG example that uses rand to randomize the results.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()

int main(){
    srand((int)time(0)); // Unique seed
    
    int answer = 0;
    
    int life = 100;
    
    printf("Do you want to go to class today 0/1:\n");
    scanf("%d", &answer);
    
    if(answer == 1){
        printf("That's good!  +10 life\n");
        life += 10;
    }else{
        printf("Did you drink your coffee today?\n");
        scanf("%d", &answer);
        if(answer == 1 && rand() % 2 == 0){
            printf("Game over!  It was posioned!\n");
            return 0;
        }else if(answer == 1){
            printf("Your order was wrong!\n");
            life = life - 50;
        }else{
            printf("Maybe that's your problem, you need coffee to live.\n");
        }
    }
    
    
    printf("Life: %d\n", life);
    
    return 0;
}