/*                                                                                                                    
  Name: Paul Talaga
  Date: March 23, 2021
  Desc: Program to invert a given png image file.

  To compile this, do: gcc invert.c
  To run: ./a.out input.png output.png
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

void invertImage(char* image, unsigned width, unsigned height){
    for(unsigned y = 0; y < height; y++){
        for(unsigned x = 0; x < width; x++){
            image[(y * width + x) * 4 + 0] = 256 - image[(y * width + x) * 4 + 0];
            image[(y * width + x) * 4 + 1] = 256 - image[(y * width + x) * 4 + 1];
            image[(y * width + x) * 4 + 2] = 256 - image[(y * width + x) * 4 + 2];
            image[(y * width + x) * 4 + 3] = 255; // No opacity
        }
    }
}


int main(int argc, char* argv[]){
    
    if(argc < 3){
        printf("I need 2 parameters: input.png output.png\n");
        printf("Ex: ./a.out input.png test.png\n");
        return 1;
    }
     
    const char* in_filename = argv[1];
    const char* out_filename = argv[2];
    
    unsigned char* image = 0; // The file loading library will allocate memory 
    
    unsigned width = 0;
    unsigned height = 0;
    
    unsigned error = 0;
    
    // Load the image into memory
    // Note the pass by pointer, so it can change the variables here!
    error = lodepng_decode32_file(&image, &width, &height, in_filename);
    if(error) printf("error %u: %s\n", error, lodepng_error_text(error));
    
    invertImage(image, width, height);
    
    saveFile(out_filename, image, width, height);
    
    free(image);
    
    return 0;
}