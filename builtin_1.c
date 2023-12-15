#include "shell.h"

/**
 * showHistory - presents the history list, with each command on a separate line,
 *               accompanied by line numbers starting at 0.
 * @info: A structure containing potential arguments, used to maintain
 *        a constant function prototype.
 *
 * Return: Always returns 0
 */
int _myhistory_(info_t *info)
{
	print_list(info->history);
	return (0);
}

/**
 * removeAlias - assigns an alias to a string
 * @info: parameter structure
 * @str: the string representing the alias
 *
 * Return: 0 on success, 1 on error
 */
int unset_alias_(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	c = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias),
		get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
	*p = c;
	return (ret);
}

/**
 * createAlias - assigns an alias to a string
 * @info: parameter structure
 * @str: the string representing the alias
 *
 * Return: 0 on success, 1 on error
 */
int set_alias_(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	if (!*++p)
		return (unset_alias_(info, str));

	unset_alias_(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

/**
 * displayAlias - shows the string associated with an alias
 * @node: the alias node
 *
 * Return: 0 on success, 1 on error
 */
int print_alias_(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)
	{
		p = _strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
			_putchar(*a);
		_putchar('\'');
		_puts(p + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}

/**
 * manageAlias - emulates the behavior of the alias builtin (man alias)
 * @info: A structure containing potential arguments, used to maintain
 *        a constant function prototype.
 *
 * Return: Always returns 0/
*/
int _myalias_(info_t *info)
{
	int i = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			print_alias_(node);
			node = node->next;
		}
		return (0);
	}
	for (i = 1; info->argv[i]; i++)
	{
		p = _strchr(info->argv[i], '=');
		if (p)
			set_alias_(info, info->argv[i]);
		else
			print_alias_(node_starts_with(info->alias, info->argv[i], '='));
	}

	return (0);
}
