#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - checks whether a n is negative or positive and zero
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative", &n);
}
else if (n > 0)
{
printf("%d is positive", &n);
}
else
printf("%d is zero", &n);
return (0);
}
