#include "dog.h"
#include <stdlib.h>

/**
 * free dog - free the dogs
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
