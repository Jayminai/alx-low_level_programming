#include <stdio.h>

/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: int.
 */

int main(void)
{
	int multi = 0;
	int result = 0;

	while (multi < 1024)
	{
		if (multi % 3 == 0 || multi % 5 == 0)
		{
			result += multi;
		}
		multi++;
	}
	printf("%d\n", result);
	return (0);
}
