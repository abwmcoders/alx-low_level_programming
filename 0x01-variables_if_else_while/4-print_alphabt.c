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
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
