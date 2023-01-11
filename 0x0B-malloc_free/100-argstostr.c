#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all
 * @ac: par 1
 * @av: par 2
 * Return: 0 Success
 */
char *argstostr(int ac, char **av)
{
  int i, j, k, exit;
  char *p = NULL;
  k = 0;
  exit = 0;

  if (ac == 0 || av == NULL)
    return (NULL);

  for (i = 0; i < ac; i++)
    {
      for (j = 0; av[i][j] != '\0'; j++)
	{
	  exit++;
	}
    }
  p = (char *)malloc(exit + ac + 1 * sizeof(char));

  if (p == NULL)
    return (NULL);

  for (i = 0; i < ac; i++)
    {
      for (j = 0; av[i][j] != '\0'; j++)
	{
	  p[k] = av[i][j];
	  k++;
	}
      p[k] = '\n';
      k++;
    }
  p[k] = '\0';
  return (p);
}
