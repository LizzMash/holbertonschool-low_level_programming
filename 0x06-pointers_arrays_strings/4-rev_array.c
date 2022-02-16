#include "main.h"
/*void function reverse array*/

void reverse_array(int *a, int n)
{
	int pos = 0;
	char sup;

	for(i = n - 1; i >= n / 2; i--)
	{
		sup = a[n-1-i];
		a[n-1-i] = a[i];
		a[i] = sup;
	}
}
