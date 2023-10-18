#include "shell.h"

/**
 * MYenviromnet_print - prints the current environment
 * @info: Structure containing potential arguments
 *
 * Return: Always 0
 */

int MYenvironment_Print(info_t *info)
{
	mylist_StrPrint(info->env);
	
    return (0);
}

/**
 * get_MYenvironment - gets the value of an environ variable
 * @info: Structure containing potential arguments. Used to maintain
 * @name: env var name
 *
 * Return: the value
 */

char *get_MYenviornment(info_t *info, const char *VARname)
{
	list_t *node = info->env;
	char *ptr;

	while (node)
	{
		ptr = startWith(node->str, VARname);
		if (ptr && *ptr)
			return (ptr);
		node = node->next;
	}
	return (NULL);
}

/**
 * set_myNEW_environ - Initialize a new environment variable,
 *             or modify an existing one
 * @info: Structure containing potential arguments
 *
 *  Return: Always 0
 */

int set_myNEW_environ(info_t *info)
{
	if (info->argc != 3)
	{
		error_puts("Incorrect number of arguements\n");
		return (1);
	}
	if (set_MYenviron(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}

/**
 * unset_MYenv - Remove an environment variable
 * @info: Structure containing potential arguments
 *
 * Return: Always 0
 */

int unset_MYenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		error_puts("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		unset_enviorn(info, info->argv[i]);

	return (0);
}

/**
 * environ_listPOP - populates env linked list
 * @info: Structure containing potential arguments. Used to maintain
 *
 * Return: Always 0
 */

int enviorn_listPOP(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		node_endADD(&node, environ[i], 0);
	info->env = node;
	
    return (0);
}
