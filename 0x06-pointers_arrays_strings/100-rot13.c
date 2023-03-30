#include "main.h"
#include <stdlib.h>

/**
 * rot13 - Encodes a string using rot13
 * @s: Input string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
  int i, j;
  char *result = malloc(sizeof(char) * (strlen(s) + 1));

  if (result == NULL)
    return NULL;

  for (i = 0; s[i] != '\0'; i++)
  {
    if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
      result[i] = s[i] + 13;
    else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
      result[i] = s[i] - 13;
    else
      result[i] = s[i];
  }

  result[i] = '\0';

  return result;
}
