#include "shell.h"

/**
 * displayEnvironment - shows the current environment
 * @info: A structure containing potential arguments, used to maintain
 *        a constant function prototype.
 * Return: Always returns 0
*/
int _myenv_(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * retrieveEnvValue - obtains the value of an environment variable
 * @info: A structure containing potential arguments, used to maintain
 * @name: The name of the environment variable
 *
 * Return: The value of the environment variable
 */
char *_getenv_(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	return (NULL);
}

/**
 * setEnvironmentVariable - Initializes a new environment variable
 *                          or modifies an existing one
 * @info: A structure containing potential arguments, used to maintain
 *        a constant function prototype.
 *
 * Return: Always returns 0
 */
int _mysetenv_(info_t *info)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}

/**
 * removeEnvironmentVariable - Eliminates an environment variable
 * @info: A structure containing potential arguments, used to maintain
 *        a constant function prototype.
 *
 * Return: Always returns 0
 */
int _my_unsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		_eputs("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		_unsetenv(info, info->argv[i]);

	return (0);
}

/**
 * createEnvList - generates an environment linked list
 * @info: A structure containing potential arguments, used to maintain
 *        a constant function prototype.
 *
 * Return: Always returns 0
*/
int populate_env_list_(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;
	return (0);
}
