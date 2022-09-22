#include "main.h"
/**
 * *_strncat - does what strncat() do 
 * @src: source
 * @dest: destination
 * Return: final value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	char final[strlen(dest) + n];
	
	while (dest[i] 1= '\0')
	{
		final[j] = dest[i];
		i++;
		j++;
	}
	i = 0;

	while (i <= n - 1)
	{
		final[j] = src[i];
		i++;
		j++;
	}
	
	for (i = 0; i < strlen(final); i++)
	{
		dest[i] = final[i];
	}
	return (dest);
}
