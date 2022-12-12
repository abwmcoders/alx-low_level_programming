#include <stdio.h>
/**
 * main - entry point
 * Return: Return 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet; alphabet <= 'z'; alphabett++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
