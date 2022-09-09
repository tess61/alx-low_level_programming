#include <stdio.h>
/**
*main - print the last digit of the n value
*Return: always 0 (success)
*/
int main(void)
{
for (char ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
continue;
putchar(ch);
}
putchar('\n');
return (0);
}
