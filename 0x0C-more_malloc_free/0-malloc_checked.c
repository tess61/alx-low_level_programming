/*
 * File: 0-malloc_checked.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <main.h>

/**
 * malloc_checked - malloc amemory allocation.
 * @b: The number  to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
