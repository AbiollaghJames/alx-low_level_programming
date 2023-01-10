#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: par
 * Return: 0 Success
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *pt;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0'
			i++;
	i++;
	pt = (char *)malloc(i * sizeof(char));

	if (pt == NULL)
		return (NULL);

	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(pt + j) = *(str + j);
	}
	*(pt + j) = '\0'
	return (pt);
}
