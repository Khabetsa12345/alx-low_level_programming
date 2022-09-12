#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of the base 10
 * startting from zero
 * RTeturn: Always (0)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a+'0');
	}
	putchar('\n');

	return (0);
}

