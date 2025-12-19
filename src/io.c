#include "../include/baseswap.h"

static bool	is_input_valid(char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (!isdigit(*s))
			if (!strchr(CHARSET, *s))
				return (false);
		s++;
		len++;
	}
	if (len > MAXSIZE)
		return (false);
	return (true);
}

int	input_validation(char **args)
{
	while (*args)
	{
		if (!is_input_valid(*args))
			return (1);
		args++;
	}
	return (0);
}

