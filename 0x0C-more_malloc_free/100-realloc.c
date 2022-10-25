#include "main.h"
#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: A pointer to the memory previously allocated.
* @old_size: The size in bytes of the allocated space for ptr.
* @new_size: The size in bytes for the new memory block.
*
* Return: If new_size == old_size - ptr.
*         If new_size == 0 and ptr is not NULL - NULL.
*         Otherwise - a pointer to the reallocated memory block.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && ptr != NULL)
	{
		nptr = malloc(new_size);

		if (ptr == NULL)
			;
			return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			nptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (ptr);
}
