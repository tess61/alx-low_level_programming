#include "main.h"
/**
 * _isupper - checks if a char is uppercase or not
 * @c: user input
 * Return: 1 if true otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A'  && c <= 'Z')
		return (1);
	else
		return (0);
}
