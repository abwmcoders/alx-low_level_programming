#include <stdio.h>
/**
 * main - entry point
 * Return: Return 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
