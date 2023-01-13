#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - allocates mem
 *@b: size to allocate
 *Return: 0 Success
 */
void *malloc_checked(unsigned int b)
{
  char *ptr;

  ptr = malloc(b);

  if (ptr == NULL)
    exit(98);
  return (ptr);
}
