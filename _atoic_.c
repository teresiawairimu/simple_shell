#include "shell.h"

/**
 * isInteractive - checks if the shell is in interactive mode
 * @info: address of the struct
 *
 * Return: 1 if in interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * isDelimiter - checks if a character is a delimiter
 * @c: the character to check
 * @delimtr: the delimiter string
 *
 * Return: 1 if it's a delimiter, 0 if not
 */
int is_delim_(char c, char *delimtr)
{
	while (*delimtr)
		if (*delimtr++ == c)
			return (1);
	return (0);
}

/**
 * isAlphabetic - checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if 'c' is alphabetic, 0 otherwise
 */

int _isalpha_(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * stringToInteger - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: 0 if no numbers in the string, the converted number otherwise
 */

int _atoi_(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
