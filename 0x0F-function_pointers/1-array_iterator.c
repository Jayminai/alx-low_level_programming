#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on elements of array
 * @array: with elements to execute functions on
 * @size: size of array
 * @action: pointer to address of function to execute
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
