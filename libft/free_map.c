#include "libft.h"

void		free_map(char **map, int size)
{
	int j;

	j = 0;
	while (j < size)
	{
		free(map[j]);
		map[j] = NULL;
		j++;
	}
	free(map);
	map = NULL;
}
