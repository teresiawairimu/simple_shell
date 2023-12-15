#include "shell.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string to determine the length of
 *
 * Return: the integer length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - compares two strings lexicographically
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a negative value if s1 is less than s2,
 *         a positive value if s1 is greater than s2,
 *         and 0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if haystack starts with needle
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: address of the next character in haystack if found, or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - appends the contents of src to dest
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to the destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
