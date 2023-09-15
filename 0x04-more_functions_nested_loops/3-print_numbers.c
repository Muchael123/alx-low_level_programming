#include "main.h"

/**
* print_numbers - Prints, numbers from 0 to 9
*
* Author: @maich
* Date: 15/09/2023
*
* Return: Print numbers - ASCII
*/

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num);

	_putchar('\n');
}
