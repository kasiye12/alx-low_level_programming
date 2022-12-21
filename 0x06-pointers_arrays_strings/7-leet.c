#include "kasiye.h"
/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transform
 */

char *leet(char *s)
{
	int kasiye, abebe;
	char s1[] = "aeot1";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (kasiye = 0; s[kasiye] != '\0'; kasiye++)
	{
		for (abebe = 0; abebe < 5; abebe++)
		{
			if (s[kasiye] == s1[abebe] || s[kasiye] == s2[abebe])
			{
				s[kasiye] = s3[abebe];
				break;
			}
		}
	}
	return (s);
}
