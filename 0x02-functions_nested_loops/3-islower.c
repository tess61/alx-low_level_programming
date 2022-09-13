#include "main.h"
/**
 * _islower - checks if a char is  lowe
 * _islower - return 1 if lower
 * c - we get from user
 * return: 0 if other
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
