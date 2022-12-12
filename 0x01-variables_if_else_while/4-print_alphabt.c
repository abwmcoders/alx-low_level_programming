#include <stdio.h>
/**
 * main - entry point
 * Return: Return 0
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc == 'q' || abc == 'e')
		{
			continue;
		}
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
