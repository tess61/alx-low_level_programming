#include "main.h"
/**
 * print_sign - check a number
 * @c: user input
 * return: 1 positive 
 * or -1 negative
 * otherwiese 0 
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1)
		_putchar('-');
	}
	else if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else
	{
		return (0);
		_putchar(0);
}
