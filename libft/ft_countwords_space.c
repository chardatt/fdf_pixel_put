#include "libft.h"

int			ft_countwords_space(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		if (*str && *str != ' ' && *str != '\n' && *str != '\t')
		{
			count++;
			while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
				str++;
		}
	}
	return (count);
}
