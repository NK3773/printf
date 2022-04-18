#include "main.h"
/**
 * print_num - outputs an integer
 * 
 * Return: integer
 */
int print_num(long int n)
{
   unsigned int n1;

    if (n < 0)
    {
        _putchar('-');
        n1 = -n;
    }
    else
    {
        n1 = n;
    }
    if (n1 / 10)
    {
        print_number(n1 / 10);
    }
    _putchar((n1 % 10) + '0');
}
