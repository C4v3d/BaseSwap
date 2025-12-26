#include "../../include/baseswap.h"
#include <stdio.h>
#include <errno.h>

void	baseswap(char **args)
{
	t_val	*values;

	values = parse(args);
	if (!values)
	{
		perror("parser");
		exit (errno);
	}

}
