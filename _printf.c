#include "main.h"

/**
 * _printf - print string to stdout
 * 
 * @format: string which will be printed
 * 
 * Reaturn: counted char that will be printed
*/

int _printf(const char *format, ...)
{
    va_list list;      
    int counter = 0;     
    int print = 0;   
    int buf_index = 0;  
    char buffer[BUFF_SIZE];

    va_start(list, format); 
    while (*format) 
    {
        if (*format == '%') 
        {
            format++; 

            if (*format == '%') 
            {
                buffer[buf_index++] = '%';
                if (buf_index == BUFF_SIZE)
                {
                    
                    
                    
                    (buffer, &buf_index);
                    counter += buf_index;
                }
            }
            else if (*format == 'c') 
            {
                int ch = va_arg(list, int); 
                buffer[buf_index++] = ch;
                if (buf_index == BUFF_SIZE)
                {
                    p_buffer(buffer, &buf_index);
                    counter += buf_index;
                }
            }
            else if (*format == 's') 
            {
                char *str = va_arg(list, char *); 
                while (*str) 
                {
                    buffer[buf_index++] = *str;
                    str++;
                    if (buf_index == BUFF_SIZE)
                    {
                        p_buffer(buffer, &buf_index);
                        counter += buf_index;
                    }
                }
            }
            else if (*format == 'd' || *format == 'i') 
            {
                int num = va_arg(list, int);
                print = p_integer(num);
                counter += print;
            }
        }
        else 
        {
            buffer[buf_index++] = *format;
            if (buf_index == BUFF_SIZE)
            {
                p_buffer(buffer, &buf_index);
                counter += buf_index;
            }
        }

        format++; 
    }

    p_buffer(buffer, &buf_index);
    counter += buf_index;

    va_end(list); 
    return counter; 
}
