#include "kasiye.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int i, abe;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (abe = 0; abe < 54; abe++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'z' && s[i] >= 'A')) && s[i] == input[abe])
			{
				s[i] = output[abe];
				break;
			}
	}
}
return (s);
}

