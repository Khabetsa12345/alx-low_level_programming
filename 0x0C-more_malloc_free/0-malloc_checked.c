#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc.
* @b: size of memory to be allocated.
*
* Return: pointer to allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *h = malloc(b);

	if (h == NULL)
	{
		exit(98);
	}
	return (h);
}
