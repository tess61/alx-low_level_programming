#include "main.h"
/**
 * swap_int - swaping
 * @a: user input of pointer type
 * @b: user input of pointer type
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
