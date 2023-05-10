#include "search_algos.h"

/**
 * linear_search - linear search algorithm in array
 *
 * @array: pointer to array to search in
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: -1 if value not represented or array is NULL
 *      first index if located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		return (i);
	}

	return (-1);
}
