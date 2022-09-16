#include "main.h"

/**
* prints_numbers - function that prints numbers from 0 to 9
*
* Return: void
*/

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
