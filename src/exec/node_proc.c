#include "../../include/baseswap.h"

/** To remove */
#include <stdio.h>

void	convert(t_val **val, int base)
{
	(void)base;
	printf("%s\n", (*val)->val);
}

void	process_nodes(const t_val *values)
{
	t_val	*p;

	p = (t_val *)values;
	while (p)
	{
		convert(&p, 0);
		p = p->next;
	}
}
