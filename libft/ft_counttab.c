#include "libft.h"

int			tab_count(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
