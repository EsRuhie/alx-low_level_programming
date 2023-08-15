#include <stdlib.h>
	#include "dog.h"


/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Pointer to the struct dog to free.
 *
 * This function frees the memory allocated for the fields of
 * the struct dog, including its name and owner strings.
 */
	void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
