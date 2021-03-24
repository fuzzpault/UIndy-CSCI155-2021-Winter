/*                                                                                                                    
  Name: Paul Talaga
  Date: March 23, 2021
  Desc: Program to generate a color gradient and save a png file.

  To compile this, do: gcc gradient.cpp
  To run: ./a.out 1024 768 output.png
  Which will create a 1024x768 image saved to output.png
*/

#include <stdio.h>
#include <math.h>
#include "lodepng.c"

void saveFile(const char* filename, const unsigned char* image, unsigned width, unsigned height) {
  /*Encode the image*/
  unsigned error = lodepng_encode32_file(filename, image, width, height);

  /*if there's an error, display it*/
  if(error) printf("error %u: %s\n", error, lodepng_error_text(error));
}

void generateGradient(char* image, unsigned width, unsigned height){
    // Loop over all pixels in the image and set a value related to the x and y 
    // position.
    for(unsigned y = 0; y < height; y++){
        for(unsigned x = 0; x < width; x++){
            image[(y * width + x) * 4 + 0] = x % 256; // Red Change this to whatever you want!
            image[(y * width + x) * 4 + 1] = y % 256; // Green
            image[(y * width + x) * 4 + 2] = (x * y) % 256; // Blue
            image[(y * width + x) * 4 + 3] = 255; // No opacity!
        }
    }
}


int main(int argc, char* argv[]){
    
    if(argc < 4){
        printf("I need 3 parameters  x, y, output.png\n");
        printf("Ex: ./a.out 1024 768 test.png\n");
        return 1;
    }
     
    const char* filename = argv[3];
     
    unsigned width = atoi(argv[1]);
    unsigned height = atoi(argv[2]);
    
    unsigned char* image = malloc(width * height * 4); 
    // This creates an array of 'chars', but it just data.  A char is one byte, so this defines
    // a byte array.  Four consecutive bytes(chars) define a single pixel: red/green/blue/alpha.
    // Alpha is the opacity (you can see through it), where 255 is no opacity.
    // So for an image of size 800x600, we'd need 800x600x4 bytes
    
    // malloc is a function to ask the OS for memory, which we'll cover later.
    
    generateGradient(image, width, height);
    
    saveFile(filename, image, width, height);
    
    free(image); // This gives the memory back to the OS.
    
    return 0;
}