#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - allocates a new memory space/ extends it
 * @ptr: the pointer for the memory address
 * @old_size: the old address
 * @new_size: the new allocated size/ address
 *
 *Return: NULL or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
		{
			free(nptr);
			return (NULL);
		}
		return (nptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		free(nptr);
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
		nptr[i] = *((char *)ptr + i);

	free(ptr);
	return (nptr);
}