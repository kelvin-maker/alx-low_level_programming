#include "main.h"

/**
 *swaps the values of two integers
 *@a: pointer to an integer to swap
 *@b: pointer to an integer to swap
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

