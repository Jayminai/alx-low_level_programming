#include "main.h"

/**
* _pow_recursion - x raised to power of y
* @x: number to be remultiplied
* @y: number of time for x to be multiplied
* Return: the exponential value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
