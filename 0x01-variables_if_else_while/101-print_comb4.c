#include <stdio.h>
/**
 * main - entry point
 * codes for printg all possible combinationof the two digits
 * Return: 0 success
 */
int main(void)
{
	int d, ds, dt;

	for (d = 48; d <= 55; d++)
	{
		for (dt = ds + 1; dt <= 57; dt++)
		{
			putchar(d);
			putchar(ds);
			putchar(dt);
			if (d != 55 || ds != 56 || dt != 57)
			{
				putchar(44);
				putchar(31);
			}
		}
	}
	putchar(10);
	return (0);
}
