#include "main.h"

/**
 * p_integer - convert integer to string to be printed
 * 
 * @num: number that will be represented
 * 
 * Return: (print) the number of char will printed
*/
int p_integer(int num)
{
    char buffer[32]; 
    int print = 0; 

    
    if (num < 0)
    {
        putchar('-');
        print++;
        num = -num;
    }

    
    int i = 0;
    do
    {
        buffer[i++] = '0' + (num % 10);
        num /= 10;
        print++;
    } while (num > 0);

   
    for (int j = i - 1; j >= 0; j--)
    {
        putchar(buffer[j]);
    }

    return print;
}
