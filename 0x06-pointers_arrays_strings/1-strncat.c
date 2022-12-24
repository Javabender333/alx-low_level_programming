#include "main.h"

/**
 * _strncat - concatenates 2 strings using max of 'n' bytes from src.
 * @dest: points to string to be concatenated
 * @src: points to string that will be appended
 * @n: number of bytes from src being  appended
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
