#include "main.h"
/**
 * main - prints the name of the file
 * Return: 0 if success
 */
int main(void)
{
	char *buf = __FILE__;
	int i;

	for (i = 0; buf[i] != '\0'; i++)
		_putchar(buf[i]);
	_putchar('\n');
	return (0);
}
