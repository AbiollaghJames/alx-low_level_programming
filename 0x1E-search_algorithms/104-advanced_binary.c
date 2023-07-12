#include "search_algos.h"
/**
 * print_array - Prints an array
 * @array: Pointer to first element of array
 * @low: 1st element of the array
 * @high: Element at end of array
 * Return: NULL
 */
void print_array(int *array, int size)
{
	int i;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		/*printf("%d", array[i]);*/

		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}
/**
 * recursive_b_search - searches a value recurively
 * @array: pointer to 1st element of array to search in
 * @low: 1st element of array
 * @high: Element at end of array
 * @value: Value to search for
 * Return: 1st index of value or -1 on failure
 */
int recursive_b_search(int *array, int low, int high, int value)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	print_array(&array[low], high - low + 1);

	if (array[mid] == value)
	{
		if (array[mid - 1] != value)
			return (mid);
	}
	if (array[mid] < value)
		return (recursive_b_search(array, mid + 1, high, value));

	else
		return (recursive_b_search(array, low, mid, value));
}
/**
 * advanced_binary - searches a value in sorted array using binary search
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index of value or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_b_search(array, 0, size - 1, value));
}
