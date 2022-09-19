#include "main.h"
#include <stdio.h>
/**
 * print_array - print array value
 * @a: parameter type fo pointer
 * @n: parameter type of int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
