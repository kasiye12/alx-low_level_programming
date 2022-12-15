#include "main.h"

/**
 * _isupper - chacks if the character is uppercase
 * @c: is the that will use for the argument of the function
 * Return: 1 if uppercase character 0 if not 
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
