#include <stdio.h>

/**
 *main-entry point
 *
 *Return:Always 0 (success)
 */
int main(void)
{
int A;
long int B;
long long int C;
char D;
float F;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(D));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(A));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(B));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(C));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(F));
return (0);
}
