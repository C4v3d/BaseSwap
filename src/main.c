#include "../include/baseswap.h"

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
		if (ac > MAXARG)
			return (0);
		// Input Validation
		// parse
		// L	Type detection
		// 	tokenization	
		// main loop
		if (input_validation(++av) == 0)
			parse(av);
		else
			fprintf(stdout, "Wrong\n");
	}
	return (0);
}
