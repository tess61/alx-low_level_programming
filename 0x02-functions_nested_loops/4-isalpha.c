#include "main.h"
/**
 * _isalpha - check alphabets
 * @c: user input
 * return: 1 if true
 * otherwise 0
 */
int _isalpha(int c)
{
	if (c > 'a' && c < 'z' && c > 'A' && c < "Z")
		return (1);
	else
		return (0);
}
