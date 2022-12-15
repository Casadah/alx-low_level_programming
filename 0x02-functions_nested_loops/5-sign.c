#include "main.h"

/**
 * print_sign - print the sign of number
 *
 * Return: 1 if no. is greater than 0, 0 if no. equals 0, and -1 if no. less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
