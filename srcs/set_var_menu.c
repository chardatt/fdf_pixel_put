#include "../includes/fdf.h"

void		set_var(t_mlx *init)
{
	init->zoom = 17;
	init->x_move = WIN_WIDTH / 2;
	init->y_move = WIN_HEIGHT / 2;
	init->depth = -2;
	init->color_1 = COLOR_BLUE;
	init->color_2 = COLOR_PINK;
	init->const_1 = 2;
	init->const_2 = 2;
	init->value_x = 0;
	init->value_y = 0;
	init->x_rotation = 0;
	init->mlx = mlx_init();
	init->win = mlx_new_window(init->mlx, WIN_WIDTH, WIN_HEIGHT, "FDF NR");
}

void		display_control(t_mlx *init)
{
	mlx_string_put(init->mlx, init->win, 5, 125, COLOR_WHITE,
	"Couleur de bases: W = Blanc, B = Bleu, R = Rouge, G = Vert");
	mlx_string_put(init->mlx, init->win, 5, 145, COLOR_WHITE,
	"Couleur de l'altitude: H = Blanc, Y = Jaune, C = Cyan, P = Rose");
	mlx_string_put(init->mlx, init->win, 5, 25, COLOR_WHITE,
	"Deplacement: Fleches directionnelles");
	mlx_string_put(init->mlx, init->win, 5, 5, COLOR_WHITE,
	"Zoom/Dezoom: ) / -");
	mlx_string_put(init->mlx, init->win, 5, 65, COLOR_WHITE,
	"Augmenter / Reduire Profondeur: ; / :");
	mlx_string_put(init->mlx, init->win, 5, 85, COLOR_WHITE,
	"Augmenter / Reduire Longueur: i / o");
	mlx_string_put(init->mlx, init->win, 5, 105, COLOR_WHITE,
	"Augmenter / Reduire Largeur: n / m");
	mlx_string_put(init->mlx, init->win, 5, 45, COLOR_WHITE,
	"Rotation gauche / droite: q / s");
}
