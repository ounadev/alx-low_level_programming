#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers containing all values
 *               from min to max, ordered from min to max.
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: If min > max or if memory allocation fails, return NULL.
 *         Otherwise, return a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *array, i;
if (min > max)
	return (NULL);
array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
	return (NULL);
for (i = 0; i < (max - min + 1); i++)
	array[i] = min + i;
return (array);
}
