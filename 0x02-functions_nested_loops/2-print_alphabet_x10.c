#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet x10
 *
 * Return: 0 no error, non-zero digit error
 */
void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha2 = 'a'; alhpa2 <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}
