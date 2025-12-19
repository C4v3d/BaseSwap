#include "../include/baseswap.h"
#include <stdbool.h>
#include <string.h>

#include <stdio.h>
static inline bool	is_dec(const unsigned int c)
{
	return( c > '1' && c <= '9');
}

t_type	get_type(char *s)
{
	t_type	t;

	t = BIN;
	while (*s)
	{
		if (t == BIN && is_dec(*s))
      			t = DEC;
		else if ((t == DEC || t == BIN) && strchr(CHARSET, *s))
	   		t = HEX;
		s++;
	}
	printf("%d\n", t);
	return (t);
}
