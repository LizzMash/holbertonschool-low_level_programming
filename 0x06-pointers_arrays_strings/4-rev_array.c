#include "main.h"
/*void function reverse array*/

void reverse_array(int *a, int n)
{
	int pos = 0;#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
	char sup;

	for(i = n - 1; i >= n / 2; i--)
	{
		sup = a[n-1-i];
		a[n-1-i] = a[i];
		a[i] = sup;
	}
}
