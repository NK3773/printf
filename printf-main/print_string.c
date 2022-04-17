#include "main.h"
/**
 * print_string - a function that outputs a given string to standard output
 * 
 * Return: a string 
 */
int print_string(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }  
}
