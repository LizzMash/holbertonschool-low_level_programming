#include "main.h"
/*Write a function that changes all lowercase letters of a string to uppercase*/

char *string_toupper(char *string)
{
	int i=0;
	
	while(string[i])
	{
		if(string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= 32;
			i++;
		}
	}
	return(string);
}
