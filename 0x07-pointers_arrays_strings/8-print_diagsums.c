#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the add of the two diagonals
 * @a: The integers.
 * @size: the size
 */
void print_diagsums(int *a, int size)
{
int num, add1 = 0, add2 = 0;
for (num = 0; num < size; num++)
{
add1 += a[num];
a += size;
}
a -= size;
for (num = 0; num < size; num++)
{
add2 += a[num];
a -= size;
}
printf("%d, %d\n", add1, add2);
}


