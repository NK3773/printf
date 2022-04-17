#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines if a flag is passed to _printf
 * 
 * Return: length of the printed string
 */
int print_reverse(char *s)
{
    int i = 0, j;

    if (!s)
    {
        s = "(null)";
    }
    while (s[i])
    {
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        _putchar(s[j]);
    }
}
