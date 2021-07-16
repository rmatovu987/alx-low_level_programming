#include "holberton.h"

/**
 * _realloc - will reallocate space in memory
 * @ptr: memory to be reallocated
 * @old_size: size in bytes of original memory
 * @new_size: size in bytes to be allocated
 *
 * Return: pointer to allocated space on success, NULL on failure,
 * ptr on no change
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;
	char *accessin, *accessout;
	unsigned int i;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	res = malloc(new_size);
	if (!res)
		return (NULL);
	accessin = ptr;
	accessout = res;

	if (ptr)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			*(accessout + i) = *(accessin + i);
		free(ptr);
	}

	return (res);
}