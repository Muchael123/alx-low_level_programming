#include <stdio.h>
/* more headers goes there */

/**
 *  main - Entry point
 *  if else statements
 * _isupper-checks if a char is upper case
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
char m = 'A';
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
if (_isupper(m))
printf("hello uppercase");

return (0);
}