/*
    Name: Paul Talaga
    Date: Mar 28, 2020
    Desc: Struct Demo
*/

#include <stdio.h>
#include <math.h>

struct point_t{
    float x;
    float y;
} typedef point_t;

float distance(point_t a, point_t b){
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}


int main(){
   
   int bob;
   point_t a;
   a.x = 5.0;
   a.y = 6.0;
   
   point_t b = {5,7};
   
   printf("x: %f y: %f \n", a.x, a.y);
   printf("x: %f y: %f \n", b.x, b.y);
   printf("Distance is: %f \n", distance(a,b) );
    
    return 0;
}