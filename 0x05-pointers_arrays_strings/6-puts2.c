#include "main.h"

/**
 * puts2 - displays the next 2 elements in a string
 * @str: string to puts2
 * Return: void
 */

void puts2(char *str)

{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
