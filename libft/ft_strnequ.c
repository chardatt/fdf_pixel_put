#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (0);
		}
	}
	return (1);
}
