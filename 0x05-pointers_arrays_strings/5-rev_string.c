#include "main.h"
/**
* rev_string - reverses a string
* author - Maich
* _putchar - print each character
* @s: char to check
*
* Description: This will reverse a string
* Return: 0 is success
*/
void rev_string(char *s)
{
	int count = 0, b, index;

	char d;

	while (s[count] != '\0')
	{
		count++;
	}
	index = count - 1;
	for (b = 0; index >= 0 && b < index; index--, b++)
	{
		d = s[b];
		s[b] = s[index];
		s[index] = d;
	}
}
