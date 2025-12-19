#ifndef BASESWAP_H
# define BASESWAP_H

#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct	s_val t_val;

#include "io.h"
#include "parse.h"

#define MAXARG	10
#define MAXSIZE	128
#define CHARSET	"abcdefABCDEF"


typedef enum e_type
{
	DEC,
	HEX,
	BIN,
}	t_type;

typedef struct s_val
{
	char		*val;
	size_t		len;
	t_type		type;
	struct s_val	*next;
}	t_val;

#endif
