#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int letter;
	int number = 0;

	while (number < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		number++;
	}
}
