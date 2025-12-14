#include "baseswap.h"

static bool	is_input_valid(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			if (!strchr(CHARSET, *s))
				return (false);
		s++;
	}
	return (true);
}

int	input_validation(char **args)
{
	while (*args && is_input_valid(*args))
		args++;
	if (*args)
		return (1);
	return (0);
}
