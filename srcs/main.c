#include "../includes/fdf.h"

void		ft_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(0);
}

int			main(int argc, char **argv)
{
	t_mlx	*init;
	char	**str;

	if (argc != 2)
	{
		ft_putendl_fd("Wrong number of arguments - Usage: ./fdf [map.fdf]", 2);
		exit(0);
	}
	CHECK_ERROR((init = (t_mlx*)malloc(sizeof(t_mlx))));
	set_var(init);
	display_control(init);
	str = tab_to_array(argv[1]);
	set_map_dim(init, str);
	str_to_int(argv[1], init);
	init->tab = set_tab_coord(init);
	action_with_map(init);
	mlx_hook(init->win, 2, 3, keyboard_actions, init);
	mlx_expose_hook(init->win, ft_expose, init);
	mlx_loop(init->mlx);
	return (0);
}
