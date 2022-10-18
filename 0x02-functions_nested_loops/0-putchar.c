#include "main.h"
/**
 * main- Print _putchar
 *
 * Return: 0 success, non-zero digit error
 */
int main(void)
{
	int i;
	char pc[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(pc[i]);
	}
	_putchar('\n');
	return (0);
}
