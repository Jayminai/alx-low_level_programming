#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ',' followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
 */

int main(void)
{
	int first_num = 48;
	int second_num, third_num;
	int com = 44;

	while (first_num <= 57)
	{
		second_num = first_num + 1;
		while (second_num <= 57)
		{
			third_num = second_num + 1;
			while (third_num <= 57)
			{
				putchar(first_num);
				putchar(second_num);
				putchar(third_num);
				if (first_num != 55 || second_num != 56 || third_num != 57)
				{
					putchar(com);
					putchar(32);
				}
				third_num += 1;
			}
			second_num += 1;
		}
		first_num += 1;
	}
	putchar('\n');
	return (0);
}
