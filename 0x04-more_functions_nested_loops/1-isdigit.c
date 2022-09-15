#include "main.h"

/**
 * _isdigit - input
 *
 * Description: define if a character is a number
 * @c: character
 * Return: 1yes 0 no
 */

int _isidigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
