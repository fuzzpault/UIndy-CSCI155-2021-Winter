/*
    Name: <your name here>
    Date: <date here>
    Desc: <description with instructions how to use>
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
   
   // Check if we got 2 parameters
   if(argc != 3){
      printf("Enter 2 filenames on the command-line.\n");
      printf("Ex: ./a.out DNA-1.txt DNA-2.txt\n");
      return 1;
   }
   char* fileName1 = argv[1];
   char* fileName2 = argv[2];
   
   FILE* inFile = NULL; // File pointer
   int fileNum1;        // Data value from file
   int fileNum2;        // Data value from file

   // Try to open file
   printf("Opening file %s\n", fileName1);
   
   inFile = fopen(fileName1, "r");
   if (inFile == NULL) {
      printf("Could not open file %s\n", fileName1);
      return -1; // -1 indicates error
   }
   
   char c; // Character read in
   unsigned numRead = 0;
   unsigned count = 0;
   unsigned unrecognized = 0;
   
   while (!feof(inFile)) {
      numRead = fscanf(inFile, "%c", &c);
      if ( numRead == 1 ) {
         //printf("%c", c);
         count++;
      }
      else {
         printf("End of file\n");
         break;
      }
   }
   
   printf("%d characters seen.\n", count);
   
   
   return 0;
}