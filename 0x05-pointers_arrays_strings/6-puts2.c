#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - only even i think
 * @str: parameter
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str) - 1; i = i + 2)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
