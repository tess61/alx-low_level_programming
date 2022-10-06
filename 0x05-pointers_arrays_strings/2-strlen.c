#include "main.h"
/**
 * _strlen - return  the value of characters
 * @s: user input pointe type
 * Return: numbers fo char in @s
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len = i + 1;
	return (len);
}
