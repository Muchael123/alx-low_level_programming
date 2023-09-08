#include <stdio.h>
/**
 *  main - Entry point
 *  if else statements
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
char L_letter = 'a';
char U_letter = 'A';
while (L_letter <= 'z')
{
putchar(L_letter);
L_letter++;
}
while (U_letter <= 'Z')
{
putchar(U_letter);
U_letter++;
}
putchar('\n');
return (0);
}
