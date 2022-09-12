#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description: prints the numbers from 0 to 9
 * Rerurn: Always (0)
 */
int main(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

	return (0);
}


