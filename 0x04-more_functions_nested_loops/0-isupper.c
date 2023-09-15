#include <stdio.h>
/* more headers goes there */

/**
 * _isupper- checks for uppercase letters
 *  main - Entry point
 *  if else statements
 *  Return: Always 0 (Success)
 *
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
int main(void)
{
char m = 'A';
if (_isupper(m))
printf("hello uppercase");

return (0);
}