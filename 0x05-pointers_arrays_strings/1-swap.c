#include "main.h"

/**
 *swaps the values of two integers
 *
 *
 *return: void
 */

void swap_int(int *a, int *b)
{
if (a && b)
{
*a ^= *b;
*b ^= *a;
*a ^= *b;
}
}
