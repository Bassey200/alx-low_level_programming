#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exit if fail
 * @b: int
 *
 * Return: pointer to the array initialized or NULL.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
