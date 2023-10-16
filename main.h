#ifndef MAIN_H
#define MAIN_H



#include <stdarg.h>  // For handling variadic arguments
#include <stdio.h>   // For standard input/output

int print_integer(int value);
void print_buffer(char buffer[], int *buff_ind);


#define BUFF_SIZE 1024

#endif
