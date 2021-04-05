// April 5, 2021

#include <stdio.h>

typedef struct fruit_t {
char a[20];
double b;
} fruit_t;

void printFruit( fruit_t* a        ) 
{
printf("Name: %s\n",        a->a);
printf("Price: %4.2lf\n", a->b);
}

void printFruits(fruit_t someFruits[], unsigned a) {
printf("You have %d fruits.\n", a);
unsigned b = 0;
for(unsigned i=0; i<a; i++){
printFruit(&someFruits[i]);printf("-----\n");
if(someFruits[i].b > 1.0){
b++;
  }
}
if(b==0){
printf("No fruit");
}else if(      b == 1){
printf("One fruit");
}else{
printf(    "%d fruits", b);
}
printf(    " are > $1.00\n");
  }

int main(){
fruit_t a[] = {{"grape", 0.27}, {"melon", 1.75}, {"pineapple", 0.1}};
printFruits(a, 3);
}
