#include <stdio.h>
/**
*main - print the last digit of the n value
*Return: always 0 (success)
*/
int main(void)
{
char ch = 'a';
char c = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
