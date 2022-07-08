#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[]  __attribute__((unused)))
{
int multiple;
  
if (argc != 3)
{
printf("Error\n");
return (1);
}
 
multiple = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multiple);
return (0);
}
