#include "main.h"
/**
 * rev_string - Reverses a string in place.
 *
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
int i, j;
char temp;
for (i = 0; s[i] != '\0'; i++)
	;
for (i--, j = 0; j < i; j++, i--)
{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
}
}
