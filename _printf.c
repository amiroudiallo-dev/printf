#include "main.h"
/**
 * _printf - print string to stdout
 * @format: string formating
 * @...: variable argument
 * Return: number of printed char on success 
*/

int _printf(const char *format, ...)
{
    va_list list;      
    int counter = 0;     
    int numprinted = 0;   
    int b_index = 0;  
    char buffer[BUFF_SIZE];

    va_start(list, format); 

    while (*format) 
    {
        if (*format == '%')  // handle percentage format specifer
        {
            format++; 

            if (*format == '%') 
            {
                buffer[b_index++] = '%';
                if (b_index == BUFF_SIZE)
                {
                    p_buffer(buffer, &b_index);
                    counter += b_index;
                }
            }

            else if (*format == 'c') // handle char format specifier
            {
                int ch = va_arg(list, int); 
                buffer[b_index++] = ch;
                if (b_index == BUFF_SIZE)
                {
                    p_buffer(buffer, &b_index);
                    counter += b_index;
                }
            }
            else if (*format == 's')  // handle string format spicifer
            {
                char *str = va_arg(list, char *); 
                while (*str) 
                {
                    buffer[b_index++] = *str;
                    str++;
                    if (b_index == BUFF_SIZE)
                    {
                        p_buffer(buffer, &b_index);
                        counter += b_index;
                    }
                }
            }
            
        }
        else 
        {
            buffer[b_index++] = *format;
            if (b_index == BUFF_SIZE)
            {
                p_buffer(buffer, &b_index);
                counter += b_index;
            }
        }

        format++; 
    }

    p_buffer(buffer, &b_index);
    counter += b_index;

    va_end(list); 

    return counter; 
}
