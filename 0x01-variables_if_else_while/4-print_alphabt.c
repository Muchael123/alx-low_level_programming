#include <stdio.h>
/**
 *  main - Entry point
 *  if else statements
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
