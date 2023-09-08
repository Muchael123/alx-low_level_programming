#include <stdio.h>
/**
 *  main - Entry point
 *  if else statements
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
