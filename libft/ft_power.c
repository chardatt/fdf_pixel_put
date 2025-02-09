#include "libft.h"

int			ft_power(int nb, int power)
{
	int r;

	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		r *= nb;
		power--;
	}
	return (r);
}
