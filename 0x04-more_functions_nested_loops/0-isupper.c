#include "main.h"

/**
 * _isupper - checks upper case
 * @c: print int
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
