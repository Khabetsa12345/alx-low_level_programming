#include "main.h"

/**
* puts2 - prints every character of a string followed by a new line
* @str: string parameter
* Return: Always 0
*/

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}

