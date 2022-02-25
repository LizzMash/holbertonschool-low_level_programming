#include "main.h"
/**
 * _strchr - Locate a character  in a string
 * @s: String to locate char
 * @c: Character to find
 * Return: Character value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
