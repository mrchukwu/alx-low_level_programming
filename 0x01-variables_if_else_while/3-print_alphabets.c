#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 no error,non zero value if error.
 */
int main(void)
{
	char m;
	char n;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
