#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to a string to be converted
 * Return: converted number, 0 if string is not binary, null if null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, con = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);
		if (b[i - 1] == '1')
			con += base;
		base *= 2;
		i--;
	}

	return (con);
}
