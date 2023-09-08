#include <stdio.h>
/**
 *  main - Entry point
 *  if else statements
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
int  i;
for (i = 0; i <= 9; i++)
{
if (i != 9)
{
putchar('0' + i);
putchar(',');
putchar(' ');
}
else
{
putchar('0' + i);
}
}

return (0);
}
