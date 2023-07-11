#include "search_algos.h"
/**
 * print_arr - Prints an array
 * @array: Pointer to 1st element of array to search in
 * @low: 1st element of the array
 * @high: Element at end of array
 * Return: NULL
 */
void print_arr(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);

		if (i < high)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - searches a value using binary search
 * @array: Pointer to 1st element of array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: Index of value or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		print_arr(array, low, high);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
