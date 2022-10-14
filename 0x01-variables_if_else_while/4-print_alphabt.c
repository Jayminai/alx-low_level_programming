#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int low = 'a';

	while (low <= 'z')
{
	if (low == 'e' || low == 'q')
{
	low += 1;
}
	else
{
	putchar(low);
	low += 1;
}
}
	putchar('\n');
	return (0);
}
