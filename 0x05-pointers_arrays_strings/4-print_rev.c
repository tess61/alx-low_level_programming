#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	long int i;

	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
