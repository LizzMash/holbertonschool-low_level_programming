#include "main.h"
/*
*_strncat function that takes three arguments
* dest of type char
*src of type char
*n of type int
*
*return dest
*/

char *_strncat(char *dest, char *src,int n)
{

	int i=0; length= 0;

	while(dest[i++])
	{
		length++;
	

		for(i=0; i< n && src[i] != '\0'; i++,length++)
		{
			dest[length] =src[i];
		}
	}

	return(dest);
}
