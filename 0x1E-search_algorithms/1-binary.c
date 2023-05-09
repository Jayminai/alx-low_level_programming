#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, -1 if not present or null array
 */

int binary_search(int *array, size_t size, int value)
{
	int i, start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	mid = (start + end) / 2;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[end]);


		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			end = mid - 1;
		}

		mid = (start + end) / 2;
	}
	if (start > end)
		return (-1);
	return (-1);
}
