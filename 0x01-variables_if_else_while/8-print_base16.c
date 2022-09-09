#include <stdio.h>
/**
 * main - print hexa numbers
 * Return: 0 if succeed
 */
int main(void)
{
char i;
char ch = 'a';
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
