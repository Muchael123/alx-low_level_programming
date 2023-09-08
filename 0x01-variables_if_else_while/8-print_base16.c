#include <stdio.h>
/**
 *  main - Entry point
 *  if else statements
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
int num = 0;
char letter = 'a';
while (num < 10)
{
printf("%d", num);
num++;
}
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
