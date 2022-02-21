#include "main"
#include <stdio.h>
/**
 * print_diagsums - Print sum of the two diagonals
 * of a squre matrix of intergers
 * @a: Array to use
 * @size: Size of diagonal
 */
void print_diagsums(int *a, int size)
{
  int i;
  int diagO = 0;
  int diagT = 0;
int i;
int diagO = 0;
int diagT = 0;

  for (i = 0; i < size; i++)
    {
          diagO += a[(i * size) + i];
          diagT += a[(size - 1) + ((size - 1) * i)];
    }
    printf("%d, %d\n", diagO, diagT);
for (i = 0; i < size; i++)
  {
    diagO += a[(i * size) + i];
    diagT += a[(size - 1) + ((size - 1) * i)];
  }
 printf("%d, %d\n", diagO, diagT);
}
