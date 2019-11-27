#include "../includes/fdf.h"

void		str_to_int(char *argv, t_mlx *init)
{
	t_map	map;

	map.y = 0;
	map.fd = open(argv, O_RDONLY);
	CHECK_NULL((init->array = (int**)malloc(sizeof(int*) * (init->max_y + 1))));
	while (get_next_line(map.fd, &map.line) != 0)
	{
		if (!(init->str = ft_strsplit(map.line, ' ')) || map.line == NULL)
			ft_error();
		CHECK_ERROR((init->array[map.y] = (int*)malloc(sizeof(int) *
		init->max_x)));
		map.x = 0;
		while (init->str[map.x])
		{
			init->array[map.y][map.x] = ft_atoi(init->str[map.x]);
			ft_strdel(&(init->str[map.x]));
			map.x++;
		}
		ft_tabdel(init->str);
		ft_strdel(&map.line);
		map.y++;
	}
	init->array[map.y] = NULL;
	ft_strdel(&(map.line));
	close(map.fd);
}
