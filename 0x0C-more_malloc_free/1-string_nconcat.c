#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: par 1
 * @s2: par 2
 * @n: par 3
 * Return: 0 Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *str;
  unsigned int size1 = 0,size2 = 0, i;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  while (s1[size1] != '\0')
    {
      size1++;
    }
  while (s2[size2] != '\0')
    {
    size2++;
    }
  if (n > size2)
    n = size2;
  str = malloc((size1 + n + 1) * sizeof(char));

  if (str == NULL)
    return (0);

  for (i = 0; i < size1; i++)
    {
      str[i] = s1[i];
    }
  for (; i < (size1 + n); i++)
    {
      str[i] = s2[i - size1];
    }
  str[i] = '\0';
  return (str);
}
