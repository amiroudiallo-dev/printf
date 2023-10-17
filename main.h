#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>  
#include <stdio.h>   
#include <unistd.h>

#define BUFF_SIZE 1024
void p_buffer(char buffer[], int *b_index);
int _printf(const char *format, ...);
int _putchar(char ch);

#endif
