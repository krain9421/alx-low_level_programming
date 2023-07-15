#include "search_algos.h"

/**
 * binary_helper - helper function to perform binary search
 *
 * @array: pointer to the first element of the array to search
 * @l: left index of array
 * @r: right index of array
 * @value: value to search for
 *
 * Return: index where `value` is located
 * -1 if value is not present in array
 */
int binary_helper(int *array, size_t l, size_t r, int value)
{
	size_t m = (l + r) / 2;
	size_t i = l;
	int result = 0;

	if (l > r)
	{
		return (-1);
	}

	printf("Searching in array: ");
	for (; i <= r; i++)
	{
		if (i == r)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);

	}

	if (value == array[m])
		return (m);
	else if (value < array[m])
		result = binary_helper(array, l, m - 1, value);
	else if (value > array[m])
		result = binary_helper(array, m + 1, r, value);

	return (result);
}

/**
* binary_search - function that searches for a value in an array
*   of integers using the Binary Search algorithm
*
*
* @array: pointer to the first element of the array to search
* @size: number of elements in array
* @value: value to search for
*
* Return: index where `value` is located
*   -1 if value is not present in array of if array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	int result = 0;

	if (array == NULL)
		return (-1);

	/* Call to our helper function */
	result = binary_helper(array, l, r, value);

	return (result);
}
