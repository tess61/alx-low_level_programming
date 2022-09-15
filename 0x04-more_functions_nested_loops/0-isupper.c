#include "main.h"
/**
 * _isupper - checks if a char is uppercase or not
 * @c: user input
 * Return: 1 if true otherwise 0
 */
int _isupper(int c)
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 25; i++)
	{
		if (c == uppercase[i])
			return (1);
		else
			return (0);
	}
}
