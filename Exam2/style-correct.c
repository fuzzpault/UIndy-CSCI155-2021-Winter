/*
    Name: Paul Talaga
    Date: April 4, 2021
    Desc: Style fix
*/
#include <stdio.h>

typedef struct fruit_t {
  char name[20];
  double price;
} fruit_t;

void printFruit( fruit_t* myFruit) {
  printf("Name: %s\n", myFruit->name);
  printf("Price: %4.2lf\n", myFruit->price);
}

void printFruits(fruit_t someFruits[], unsigned len) {
  printf("You have %d fruits.\n", len);
  unsigned expensive_fruits = 0;
  for(unsigned i = 0; i < len; i++){
    printFruit(&someFruits[i]);
    printf("-----\n");
    if(someFruits[i].price > 1.0){
        expensive_fruits++;
    }
  }
  if(expensive_fruits == 0){
      printf("No fruit");
  }else if(expensive_fruits == 1){
      printf("One fruit");
  }else{
      printf("%d fruits", expensive_fruits);
  }
  printf(" are > $1.00\n");
}

int main(){
  fruit_t fruits[] = {{"grape", 0.27}, {"melon", 1.75}, {"pineapple", 0.1}};
  printFruits(fruits, 3);
}
