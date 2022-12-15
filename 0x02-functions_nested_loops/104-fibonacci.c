#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci numbers under 98
 * Return: 0 if succesfull
*/

int main(void)
{
	long int i, a, b, sum;

	a = 1;
	b = 2;
	for (i = 1, sum = 1; a < 98; i++)
	{
		if (!(a % 2))
			sum += a;
			b = a + b;
			a = b - a;
	}
	printf("%ld\n", sum);
	return (0);
}
