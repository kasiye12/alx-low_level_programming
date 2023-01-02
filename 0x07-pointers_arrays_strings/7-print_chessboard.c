#include "kasiye.h"

/**
 * print_chessboard - function that print a chessbord
 * @a: size of 2d array
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 0)
	{
		j = 0;
		while (j < 0)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
			j++;
		}
		i++;
	}
}
