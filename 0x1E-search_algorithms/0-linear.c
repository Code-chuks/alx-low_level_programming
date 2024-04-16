0x1E-search_algorithms/0-linear.c

#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers using linearearch.
 * @array: A pointer to the first element of the array toearch.
 * @size: The number of elements in the array.
 * @value: The value toearch for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int linear_search(int *array,ize_t size, int value)
{
ize_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i <ize; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}
