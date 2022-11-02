#include "main.h"
int _sqrt(int start, int root);

/**
* _sqrt_recursion - finds the square root of a number
* @n: the number to check for its square root
* Return: -1 if no square root or the squareroot of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
* _sqrt - find the square root
* @start: starting value to check for root
* @root: the square root value
* Return: the square root
*/

int _sqrt(int start, int root)
{
	if (start > root)
		return (-1);
	else if (start * start == root)
		return (start);
	return (_sqrt(start + 1, root));
}
