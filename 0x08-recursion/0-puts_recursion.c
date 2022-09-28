#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line
* @s - string
* Return: on success return 1,
* on error -1 is returned and errno is set appropriately
*/

void _puts_recursion(char *s);
{
	if  (s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s + 0);
	_puts_recursion(s + 1)
}
