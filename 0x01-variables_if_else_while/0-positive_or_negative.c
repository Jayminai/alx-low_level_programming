#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * if n is greater than 0: It's positive, if the n is 0: It's zero
 * if n is less than 0: It's negative, new line
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
}
	else if (n < 0)
{
	printf("%d is negative\n", n);
}
	else
{
	printf("%d is zero\n", n);
}
	return (0);
}
