#include "main.h"
#include <stdio.h>
/**
 * *create_array - creates array
 * @size: par 1
 * @c: par 2
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	  {
	    arr = (char *)malloc(size * sizeof(char));

	    if (arr != NULL)
	      {
		for (i = 0; i < size; i++)
		  arr[i] = c;
	      }
	  }
	return (arr);
}
