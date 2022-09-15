#include <stdio.h>

/**
 * print_to_98 - a function that prints all the natural numbers from n to 98.
 * 		 printed inorder, separated by a comma, and followed by space.
 * @n: the number to begin counting from.
 */
void print_to _98(int n)
{
	if (n >= 98)
	{
		while(n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

