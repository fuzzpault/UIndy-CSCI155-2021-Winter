/*
    Name: Paul Talaga
    Date: April 4, 2021
    Desc: Syntax fix
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // Enables use of time()

struct donut_box_t{
    unsigned num_donuts;
    float cost;
    unsigned days_old;
} typedef donut_box_t;

void printBox(donut_box_t box){
    printf("Box of %d donuts.  $%f %d days old.\n", box.num_donuts,
                                                    box.cost,
                                                    box.days_old);
}

float old_discount(donut_box_t box){
    float ret = box.cost - box.days_old * 0.1 * box.cost;
    if(ret < 1.0){
        return 1.0;
    }
    return ret;
}

float stackCost(donut_box_t* stack, unsigned stack_height){
    float ret = 0.0;
    for(unsigned i = 0; i < stack_height; i++){
        ret += old_discount(stack[i]);
    }
    return (int)(ret * 100) / 100.0;
}

int main(){
    srand((int)time(0)); // Unique seed
    
    printf("Hi! How many boxes of donuts do you want?\n");
    int wanted_boxes;
    scanf("%d", &wanted_boxes);
    
    if(wanted_boxes < 0 || wanted_boxes > 100){
        printf("Sorry, negative want and >100 aren't allowed, retry.");
        scanf("%d", &wanted_boxes);
    }
    
    if(wanted_boxes == 0){
        printf("0 donuts will make you sad.  Please consider better ");
        printf("life choices.\n\n");
        return 0;
    }
    
    donut_box_t stack[100];
    for(unsigned i = 0; i < wanted_boxes; i++){
        stack[i].num_donuts = rand() % 12 + 1;
        stack[i].cost = (rand() % 200) / 10.0;
        stack[i].days_old = rand() % 12;
    }
    
    printf("Here are your donuts!\n");
    for(unsigned i = 0; i < wanted_boxes;i++ ){
        printBox(stack[i]);
    }
    
    printf("\nThat will be $%.2f please!\n", stackCost(stack, wanted_boxes));
    
    return 0;
}