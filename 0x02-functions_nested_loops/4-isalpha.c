#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be tested.
 *
 * Return: 1 if c is a letter, and 0 otherwise.
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
