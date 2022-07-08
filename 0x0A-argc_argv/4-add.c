#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the sum of arguements
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[]  __attribute__((unused)))
{
  int i = 0, sum = 0;
  if (argc)
    printf("%d\n", 0);
  if (isdigit(atol(argv[i])) == 0)
    {
    printf("%s\n", "error");
  return (1);
    }
    while(i < argc)
      {
	sum += atoi(argv[i]);
	printf("%d\n", sum);
	i++ ;
      }
  return (0);
}
