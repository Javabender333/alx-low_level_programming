#include "main.h"

/**
 * _strcat - concatenates given string to another and adds null byte
 * @dest: points to the string to be concatenated
 * @src: the string that will be used to concatenate
 * Return: (0)
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
