#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The code print the number in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive \n", n);
if (n == 0)
{
printf("%d is zero \n", n);
}
}
else
{
printf("%d is negative \n", n);
}
return (0);
}
