#include <stdio.h>
/**
 *  main - Entry point
 *  if else statements
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
int number = 0;
while (number <= 9)
{
putchar('0' + number);
number++;
}
putchar('\n');
return (0);
}
