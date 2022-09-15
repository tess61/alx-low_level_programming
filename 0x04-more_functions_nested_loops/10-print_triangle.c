#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, j, k;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (j = 1; j < size - a; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= a; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
