#include "baseswap.h"

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		fprintf(stderr, "You must specify the base you want to convert to");
		return (0);
	}
	else
	{
		// Input Validation
		// parse
		// main loop
		if (input_validation(++av) == 0)
			fprintf(stdout, "Valid\n");
		else
			fprintf(stdout, "Wrong\n");
	}
	return (0);
}
