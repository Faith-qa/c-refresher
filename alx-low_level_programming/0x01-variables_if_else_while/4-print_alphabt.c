#include <stdio.h>
/**
 * main - print alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char start;

	start = 'a';
	while (start <= 'z')
	{
		if ((start != 'e') && (start != 'q'))
		{
			putchar(start);
		}
		start++;
	}
	putchar('\n');
	return (0);
}
