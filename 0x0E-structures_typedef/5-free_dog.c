#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a dog
 * @d: par 1
 * Return: 0 Success
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
