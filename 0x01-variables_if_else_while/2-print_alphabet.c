#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
