/*
MIDTERM TEST QUESTION Q6
(FILE IO: 2 points)

In the starter code you will find a file called cano2.txt (it is identical to cano.txt 
and canoOriginal.txt). 

This C file opens the file cano2.txt and is intended to replace all occurrences
of the following bytes 'Sherlock' with the bytes 'csc209H5'. 

Your task is to replace the <TODO> items in this code, with the correct C code, so that
when the file is run with the command gcc -g -fsanitize=address q6.c && ./a.out
all occurrences of Sherlock have been replaced with 'csc209H5'.

Note: 
- You are not allowed to add any additional lines of code. 
- You are only allowed to replace the <TODOs> with the correct code.  
- (If you "mess up" cano2.txt, use canoOriginal.txt to restore cano2.txt)
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHERLOCK_LENGTH 8
#define SHERLOCK "Sherlock"
#define REPLACEMENT "csc209H5"

#define TODO -1000  // Ignore this line, it exists so the starter code compiles.

void replace(FILE * f, char * target, char * replacement){
  char buf[1] = {'0'};
  int count = 0;
  while(fread(buf, 1, 1, f) == 1) {
    if (buf[0] == target[count]) {
      count++;
      if (count == SHERLOCK_LENGTH) {
        fseek(f, -1 * count, SEEK_CUR);  // Replace both TODOs with your C code.
        fwrite(replacement, strlen(replacement), 1, f);  // Replace both TODOs with your C code.
        count = 0; 
      }
    } else  {
      count = 0;
    }
  }
}


int main() {
  char * replacement = malloc(5000 * sizeof(char));
  strncpy(replacement, REPLACEMENT, 30);
  FILE * f = fopen("cano2.txt", "r+");
  replace(f, SHERLOCK, replacement);
  return 0;

}
