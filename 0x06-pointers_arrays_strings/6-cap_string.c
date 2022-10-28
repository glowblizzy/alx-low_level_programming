#include "main.h"
/**
 * cap_string - capitalizes all words from string
 * @s: input string
 * Return: the pointer to destination
 */

char *cap_string(char *s)
{
		int counter = 0, i;
		int seperators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

		if (*(s + counter) >= 97 && *(s + counter) <= 122)
			*(s + counter) = *(s + counter) - 32;
		counter++;
		while (*(s + counter) != '\0')
		{
			for (i = 0; i < 13; i++)

				if (*(s + counter) == seperators[i])

				{
					if ((*(s + (counter + 1)) >= 97) && (*(s + (counter + 1)) <= 122))

						*(s + (counter + 1)) = *(s + (counter + 1)) - 32;

					break;

				}

		}
		counter++;
				}
return (s);
}
