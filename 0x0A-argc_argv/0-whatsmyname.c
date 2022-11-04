#include <stdio.h>

/**
 * main- print the name of the executable file
 * @argc: Argument count
 * @argv: Array of argument strings
 * Return: 0 for successful exit
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
