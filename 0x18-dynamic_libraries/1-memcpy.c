#include "main.h"
/**
 * _memcpy - copy a particular block of memory
 * @dest: final memory location
 * @src: source memory
 * *@n: number of bytes
 *
 * Return: final memory location
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
