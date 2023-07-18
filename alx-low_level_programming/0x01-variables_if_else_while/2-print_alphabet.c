#include <stdio.h>
/**
 * main - print alphabet in lower case
 * Return: 0 on success
 */
int main(void)
{
	char start;

	start = 'a';
	while (start <= 'z')
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
