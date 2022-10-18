#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
	long a = 0;
	long b = 1;
	int n = 0;
	long fib;

	while (n < 50)
	{
		fib = a + b;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		a = b;
		b = fib;
		n += 1;
	}
	return (0);
}
