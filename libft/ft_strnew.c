#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	while (i < size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
