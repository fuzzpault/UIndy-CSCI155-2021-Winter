/*
    Name: Paul Talaga
    Date: Feb 1, 2020
    Desc: MadLib for HW 02 - Asks the user for input and builds a story with 
          their answers.
*/

#include <stdio.h>

int main(){
    char name[50];
    char fav_color[50];
    char fav_food[50];
    int num_pets = 0;
    int days_class = 0;
    int days_eating_fav = 0;
    double fav_food_cost = 0.0;
    double tax_rate = 1.0;
    double pi = 0.0;

    
    printf("What is your name?\n");
    scanf("%s", name);
    
    printf("\nWhat is your favorite color?\n");
    scanf("%s", fav_color);
    
    printf("\nWhat is your favorite food?\n");
    scanf("%s", fav_food);
    
    printf("\nHow many pets do you have?\n");
    scanf("%d", &num_pets);
    
    printf("\nHow many days do you have class?\n");
    scanf("%d", &days_class);
    
    printf("\nHow many days a week do you eat %s, on average?\n", fav_food);
    scanf("%d", &days_eating_fav);

    printf("\nHow expensive is %s?\n$", fav_food);
    scanf("%lf", &fav_food_cost);
    
    printf("\nWhat is a number with a decimal point > 0 and < 20?\n");
    scanf("%lf", &tax_rate);
    
    printf("\nWhat is a the decimal value of pi?\n");
    scanf("%lf", &pi);
    
    
    printf("\n\n");
    
    printf("Hi %s, have you ever heard of the story about Bruce the giant?  Let me tell you!\n",name);
    printf("One day Bruce sat down with his favorite %s, but unfortunatly it was %s!\n", fav_food, fav_color);
    printf("This made Bruce really mad, as he spent %f of his hard-earned coints on it, working %d days a week.\n",fav_food_cost, days_class);
    printf("Luckily he looked down at his %d pets and became happy. 'Maybe I should give them extra food %d days a week', he thought.\n", num_pets, days_eating_fav);
    printf("'If only the king didn't take %f %% of my harvest, I could feed them more!', Bruce said.\n", tax_rate);
    printf("Poor Bruce was having a hard time.  Luckily for him, in %f days he'll find some gold on the road!\n", pi);
    
    
    return 0;
}