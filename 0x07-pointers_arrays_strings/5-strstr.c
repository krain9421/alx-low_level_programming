#include "main.h"

/**
* _strstr - function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*
* @haystack: string to be searched
* @needle: substring to be searched for
*
* Return: pointer to the beginning of the located
* substring, or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *t1;
	char *t2;

	while (*haystack)
	{
		t1 = haystack;
		t2 = needle;
		do {
			if (*t1 != *t2)
			{
				break;
			}
			else
			{
				t1++;
			}
		} while (*t2++);

		/*If the substring is found in the string*/
		if (*t2 == '\0')
		{
			return (haystack);
		}
		else
		haystack++;
	}

	return (NULL);
}

