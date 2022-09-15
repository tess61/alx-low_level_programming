#include "main.h"
/**
 * _isdigit - check if an input is digit or not
 * @c: user input
 * Return: 1 if true otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
