/*
MIDTERM TEST QUESTION 5
(Assignment 1: 4 marks)

A simfs file system is totally messed up (TMU)
if the same block is used multiple times within a file or across multiple files.

For example, if two different files both use block 5, then the file system is TMU.

Write code to solve the below task.
*/

#include <stdio.h>
#include <stdlib.h>
#include "simfs.h"


/* Print whether simfs filename provided on commandline is
*  Totally Messed Up or not.
*
*  Output 'TMU' if the simfs filename is Totally Messed Up;
*  otherwise, output 'not TMU'.

E.g., if the file system demo_fs is totally messed up. 
./simfs_check demo_fs
TMU
E.g., if the file system demo_fs is not totally messed up. 
./simfs_check demo_fs
not TMU

Note you can use argv to extract the file system name.
You may create helper functions as long as they stay within this file.
*/

int main(int argc, char *argv[]) {

    // TODO your code here

}
