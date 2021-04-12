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
    return b.lower_left.x <= b.upper_right.x &&
           b.lower_left.y <= b.upper_right.y;
}

// Return the area of the box, or -1 if the box is invalid
float getArea(box_t b){
    if(!isValid(b))return -1;
    return (b.upper_right.x - b.lower_left.x) * (b.upper_right.y - b.lower_left.y);
}

// Return true if the box is a square, within 0.01.
// An invalid box isn't square.
bool isSquare(box_t b){
    if( !isValid(b)){
        return false;
    }
    float dx = b.upper_right.x - b.lower_left.x;
    float dy = b.upper_right.y - b.lower_left.y;
    return fabs(dx - dy) < 0.01;
}

// Return true of the given point is inside the box
bool insideBox(point_t p, box_t b){
    return b.lower_left.x <= p.x &&
           p.x <= b.upper_right.x &&
           b.upper_right.y >= p.y &&
           p.y >= b.lower_left.y;
}

void printBox(box_t b){
    printf("%s: Upper right x: %f y: %f \n",b.name, b.upper_right.x, b.upper_right.y);
    printf("      Lower left x: %f y: %f \n",b.lower_left.x, b.lower_left.y);
}

float distance(point_t a, point_t b){
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}


int main(){
   
   box_t a = {0.0,0.0,1.0,1.0,"a"};
   box_t b = {1.0,0.0,10.0,1.0,"b"};
   box_t c = {1.0,0.0,10.0,1.0,"c"};
   
   printBox(a);
   printBox(b);
   printBox(c);
   
   assert( isValid(a) == true );
   assert( isValid(b) == true );
    
    return 0;
}