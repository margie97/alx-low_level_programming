#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main-assigns a random number to int
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int n;

strand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
print("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
