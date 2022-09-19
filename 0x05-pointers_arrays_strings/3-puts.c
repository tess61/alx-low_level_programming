#include "main.h"
#include <string.h>
/**
 * _puts - print string without puts
 * @str: parameter
 */
void _puts(char *str)
{
	unsigned long int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%d",(str[i]);
	}
	putchar('\n');
}
