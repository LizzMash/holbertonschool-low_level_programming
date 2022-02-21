#include "main.h"
#include <stddef.h>
/*
* _strchar - locates a character aka character found
* @s: the string
* @c: the character
*
*return: a pointer to a character aka the character found
*/

char *_strchr(char *s, char c)
{
	int i;
	
	for (i=0;s[i] != '\0';i++)
	{
		if(s[i] ==c)
		return (&s[i]);
	}
	return (0);
}
