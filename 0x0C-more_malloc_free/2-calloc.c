#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    /* check for zero arguments */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* allocate memory using malloc */
    ptr = malloc(nmemb * size);

    /* check if malloc failed */
    if (ptr == NULL)
        return (NULL);

    /* initialize memory to zero */
    memset(ptr, 0, nmemb * size);

    return (ptr);
}

