#include "main.h"
/**
 * _puts - this prints a string to stdout
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchat('\n');
}
