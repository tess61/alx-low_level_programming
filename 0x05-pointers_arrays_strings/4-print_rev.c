#include "main.h"
#include <string.h>
/**
 * print_rev - print in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	unsigned long int i;

	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
