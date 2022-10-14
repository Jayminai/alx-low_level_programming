#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ',' followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0
 */

int main(void)
{
	int first_num = 48;
	int second_num;
	int com = 44;

	while (first_num <= 57)
{
	second_num = first_num + 1;
	while (second_num <= 57)
{
	putchar(first_num);
	putchar(second_num);
	if (first_num != 56 || second_num != 57)
{
	putchar(com);
	putchar(32);
}
	second_num += 1;
}
	first_num += 1;
}
	putchar('\n');
	return (0);
}
