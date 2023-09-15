#include <stdio.h>

/**
* _isupper - Checks if a character is uppercase.
* @c: The character to check.
* Return: 1 if 'c' is uppercase, 0 otherwise.
*
*main-check if code works
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int main()
{
	char ch = 'A';

	if (_isupper(ch))
	{
		printf("%c is uppercase.\n", ch);
	}
	else
	{
		printf("%c is not uppercase.\n", ch);
	}

	ch = 'a';
	if (_isupper(ch))
	{
		printf("%c is uppercase.\n", ch);
	}
	else
	{
		printf("%c is not uppercase.\n", ch);
	}

	return (0);
}

