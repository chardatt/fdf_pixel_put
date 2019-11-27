#include "libft.h"

char			*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	tmp;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size--;
	while (i < size)
	{
		tmp = str[size];
		str[size] = str[i];
		str[i] = tmp;
		i++;
		size--;
	}
	return (str);
}
