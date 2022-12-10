#include<stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		if (num < 9)
			putchar(num + '0');
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
