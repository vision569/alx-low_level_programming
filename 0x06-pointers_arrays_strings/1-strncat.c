#include "main.h"

/**
 * _strncat - join two strings with an n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char that will be copied
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{

	i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
