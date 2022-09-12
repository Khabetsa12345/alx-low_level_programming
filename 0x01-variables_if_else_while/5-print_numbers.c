#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description: prints all single digit numbers 
 * base 10 starting from 0
 * Return: Always (0)
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




