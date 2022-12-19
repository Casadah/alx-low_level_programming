#include "main.h"

/**
 * print_numbers - prints number from 0 - 9
 * @n: number
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
