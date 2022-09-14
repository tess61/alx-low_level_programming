/*
 * _islower _check alphabets 
 */
#include "main.h"
/**
 *_islower - main type fun:
 * @c: input from user
 * return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
