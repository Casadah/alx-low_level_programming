#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: the number checked
 *
 * Return: 1, -1, 0 if no. above 1, below 1 and equal to 0
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
