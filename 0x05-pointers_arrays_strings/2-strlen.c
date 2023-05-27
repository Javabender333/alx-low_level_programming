/**
 * _strlen - Return the length of input string
 * @s: string to be used as input
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
