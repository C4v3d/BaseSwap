#ifndef BASESWAP_H
# define BASESWAP_H

#include <stdlib.h>

typedef struct	s_val t_val;

#include "io.h"
#include "parse.h"
#include "id_type.h"
#include "exec.h"
#include "node_proc.h"

#define MAXARG	10
#define MAXSIZE	128
#define CHARSET	"abcdefABCDEF"


typedef struct s_val
{
	char		*val;
	size_t		len;
	t_type		type;
	struct s_val	*next;
}	t_val;

#endif
