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
if (letter == 'q' || letter == 'e')
{

}
else
{
putchar(letter);
putchar('\n');
}
letter++;
}
return (0);
}
