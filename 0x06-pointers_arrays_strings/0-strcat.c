#include "main.h"
/**
 * *_strcat - do what strcat() does
 * @dest: destination
 * @src: soruce
 * Return: final value
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char final[100];

	while (dest[i] != '\0')
	{
		final[j] = dest[i];
		i++;
		j++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		final[j] = src[i];
		i++;
		j++;
	}

	for (int i = 0; i < 100; i++)
	{
		dest[i] = final[i];
	}
	return (dest);
}
