i#include "main.h"

/**
 * p_buffer - print buffer to stdout
 * 
 * @buffer: temporary storage that store what put 0n it
 * @buf_index: size of char that pass to buffer
 * 
 * Reaturn: (0)
*/
void p_buffer(char buffer[], int *buf_index)
{
    if (*buf_index > 0)
    {
        for (int i = 0; i < *buf_index; i++)
        {
            putchar(buffer[i]);
        }
    }

    *buf_index = 0;
}
