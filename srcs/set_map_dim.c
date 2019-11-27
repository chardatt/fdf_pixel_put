#include "../includes/fdf.h"

static int	countword(char const *s1)
{
	int	word;
	int	index;

	if (*s1 == '\0')
		return (0);
	index = 0;
	if (s1[index] != ' ')
		word = 1;
	else
		word = 0;
	index++;
	while (s1[index])
	{
		if (s1[index - 1] == ' ' && s1[index] != ' ')
			word++;
		index++;
	}
	return (word);
}

void		set_map_dim(t_mlx *init, char **str)
{
	int	i;
	int	diff;
	int	blank;

	i = 0;
	diff = 0;
	while (str[i])
	{
		blank = 0;
		blank = countword(str[i]);
		if (i == 0)
			diff = blank;
		if (diff != blank)
			ft_error();
		i++;
	}
	if (i == 0 && diff == 0)
		ft_error();
	init->max_y = i;
	init->max_x = diff;
	ft_strdel(str);
}
