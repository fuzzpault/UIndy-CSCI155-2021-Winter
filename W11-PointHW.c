/*
    Name: Paul Talaga
    Date: Mar 28, 2020
    Desc: Struct HW
    
    Compile with: gcc W11-PointHW.c -lm
    The -lm is needed for sqrt 
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>

struct point_t{
    float x;
    float y;
} typedef point_t;


struct box_t{
    point_t lower_left;
    point_t upper_right;
    char* name;
} typedef box_t;

// Do the points defined in box_t make sense?
bool isValid(box_t b){
    return false;  //Change me!
}

// Return the area of the box, or -1 if the box is invalid
float getArea(box_t b){
    return 0.0; //Change me!
}

// Return true if the box is a square, within 0.01.
// An invalid box isn't square.
bool isSquare(box_t b){
    return true;//Change me!
}

// Return true of the given point is inside the box
bool insideBox(point_t p, box_t b){
   return true;//Change me!
}

void printBox(box_t b){
    return;//Change me!
}

float distance(point_t a, point_t b){
    return 0.0;//Change me!
}


int main(){
   
   box_t a = {0.0,0.0,1.0,1.0,"a"};
   a.lower_left.x = 0.0;
   a.lower_left.y = 0.0;
   a.upper_right.x = 1.0;
   a.upper_right.y = 1.0;
   a.name = "a";
   
   box_t b = {1.0,0.0,10.0,1.0,"b"};
   box_t c = {1.0,0.0,10.0,1.0,"c"};
   
   printBox(a);
   printBox(b);
   printBox(c);
   
   assert( isValid(a) == true );
   assert( isValid(b) == true );
   // More tests will be added!
    
    return 0;
}