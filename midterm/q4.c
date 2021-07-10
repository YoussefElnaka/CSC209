
/* 
MIDTERM TEST QUESTION 4
(Strings and Malloc: 6 Points)

Your task is to complete 2 functions:

char * strmash(char * s); 
and 
char * strmash_extra(char *s, char *f);

The starter code below has additional examples as well. 

The function strmash takes 1 parameter, which is guaranteed to be a string. 
It must create a new string and return a valid pointer to this new string. 
The new string is the original string concatenated with the reverse of the original string. 
Example: if s is "abc" then the strmash returns a pointer to "abccba"

The function strmash_exta takes two parameters, both are guaranteed to be strings.
strmash_extra returns a pointer to the new string which is the reverse of 'f'
concatenated with the reverse of 's'. Both,'s' and 'f' are guaranteed to be valid C strings.
Example: if f is "abc", s is "123" then strmash_extra returns "cba321"

IMPORTANT RESTRICTION for strmash_extra:
You may NOT use any loops in strmash_extra, but you are allowed to
call strmash if you'd like.

Important restriction: The input strings may not be modified, you need 
to allocate memory for the new strings. 

You may use any string.h functions that you would like.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//abc ==> cba
char * strmash(char * s) {
  return NULL;
}

// abc, 123 ==> cba321
char * strmash_extra(char *s, char *f) {
  return NULL;
}
int main() {
  char * f = "abcdefg";
  char * s = "1234567";

  printf("%s --> %s\n", s, strmash(s)); // 12345677654321
  printf(">%s< --> >>%s<<\n","", strmash("")); // >><<
  printf("%s --> %s\n", f, strmash(f)); // abcdefggfedcba
  
  printf("%s\n", strmash_extra("123", "abc"));  // 321cba
  printf("%s\n", strmash_extra("1234", "ab"));  // 4321ba

  return 0;
}
