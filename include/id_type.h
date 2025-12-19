#ifndef ID_TYPE_H
# define ID_TYPE_H

typedef enum e_type
{
	DEC,
	HEX,
	BIN,
}	t_type;

t_type	get_type(char *s);

#endif
