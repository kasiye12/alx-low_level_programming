#include "main.h"

/**
 * _isalpha - check for lower case letter 
 * @c : character to check
 * Return: returns 0 or 1 depending on condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
