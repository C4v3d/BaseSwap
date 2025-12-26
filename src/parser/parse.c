#include "../../include/baseswap.h"
#include <stdlib.h>
#include <string.h>


/** To remove */
#include <stdio.h>

static t_val	*new_node(char *s)
{
	t_val	*n;

	n = malloc(sizeof(t_val));
	if (!n)
		return (NULL);
	n->len = strlen(s);
	n->type = get_type(s);
	n->val = s;
	n->next = NULL;
	return (n);
}

static int	add_back(t_val **n, char *s)
{
	t_val	*tmp;

	tmp = *n;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node(s);
	if (!tmp->next)
		return (1);
	return (0);
}

static int	add_node(t_val **n, char *s) 
{
	if (!*n)
	{
		*n = new_node(s);
		if (!*n)
			return (1);
	}
	else
		if (add_back(n, s) != 0)
			return (1);
	return (0);
}

t_val	*parse(char **av)
{
	t_val	*values;

	values = NULL;
	while (*av)
	{
		if (add_node(&values, *av) != 0)
		{
			// clean and free
			return (NULL);
		}
		av++;
	}
	return (values);
}
