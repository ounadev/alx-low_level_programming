#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
  int len = 0, i;
  char c;

  while (s[len])
    len++;

  for (i = 0; i < len / 2; i++)
  {
    c = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = c;
  }
}
