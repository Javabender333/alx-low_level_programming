#include <stdio.h>
/**
 * main - print lowercase alphabet and a new line
 *
 * Return: Alawys return 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}

	putchar('\n');

	return (0);
}
