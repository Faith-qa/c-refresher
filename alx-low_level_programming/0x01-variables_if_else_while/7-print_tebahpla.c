#include <stdio.h>
/**
 * main - print lower case alphabet in reverse
 * Return: 0 on success
 */
int main(void)
{
	char start;

	start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}
	putchar('\n');
	return (0);
}
