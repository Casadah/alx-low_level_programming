#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: The number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld = -ld;
	_putchar(ld  + '0');

	return (ld);
}
