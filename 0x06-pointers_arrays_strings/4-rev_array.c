#include "sluggy.h"

/**
 * reverse_array - Reverses the content of an array
 * @n: The number of elements in the array
 * @a: the array reversed
 */
void reverse_array(int *a, int n)
{
int start, num;

for (num = n - 1; num >= n / 2; num--)

{
start = a[n - 1 - num];
a[n - 1 - num] = a[num];
a[num] = start;
}
}
