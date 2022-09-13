#include "main.h"

/**
 * _lowercase - to check for the lowercase character
 * @c: int thar will be used for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
