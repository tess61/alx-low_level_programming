#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - print the half of what its given
 * @str: parameter
 */
void puts_half(char *str)
{
	unsigned long int i;

	for (i = strlen(str) / 2; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
