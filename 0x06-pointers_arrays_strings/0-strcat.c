#include <main.h>
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
	char final[strlen(dest) + strlen(src)];

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

	for (int i = 0; i < strlen(final); i++)
	{
		dest[i] = final[i];
	}
	return (dest);
}
