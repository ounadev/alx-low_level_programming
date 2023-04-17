#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}
