#include <stdio.h>
/**
 * main - print hexa numbers
 * Return: 0 if succeed
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
char c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
