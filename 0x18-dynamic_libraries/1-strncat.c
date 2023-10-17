#include "main.h"
/**
 * _strncat - puts 2 strings together
 * @dest: final value
 * @src: source value
 * @n: bytes
 *
 * Return: final value
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
