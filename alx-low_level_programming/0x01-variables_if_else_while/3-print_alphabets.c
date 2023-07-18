#include <stdio.h>
/**
 * main - print alphabet in uppercase
 * Return: 0 on success
 */
int main(void)
{
	char start;

	start = 'A';
	while (start <= 'Z')
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
