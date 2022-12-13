#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints numbers in base 16
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int num;
	int lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');

	return (0);
}
