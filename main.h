#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>  
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int print_integer(int value);
void p_buffer(char buffer[], int *buff_ind);

#endif
