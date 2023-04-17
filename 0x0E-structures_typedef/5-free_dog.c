#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t struct
 * @d: pointer to struct to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}
