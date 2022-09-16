#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not
 * @c: character to be tested
 * Return: 1 if yes, 0 if otherwise
 */

int _isidigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
