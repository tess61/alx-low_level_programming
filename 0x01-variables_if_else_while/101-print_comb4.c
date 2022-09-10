#include <stdio.h>
/**
 * main - entry point
 * codes for printg all possible combinationof the two digits
 * Return: 0 success
 */
int main(void)
{
	int digit,  digit2, digit3;

	for (digit = 0; digit <= 9; digit++)
	{

		for (digit2 = digit + 1; digit2 < 10; digit2++)
		{

			for (digit3 = digit2 + 1; digit2 < 10; digit3++)
			{
				putchar((digit % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');
				if (digit == 7 && digit2 == 8 && digit3 == 9)
						continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
