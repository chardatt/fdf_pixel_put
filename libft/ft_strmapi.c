#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = NULL;
	if (s)
	{
		if (!(new = (char*)malloc(sizeof(*new) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[i] != '\0')
		{
			new[i] = (*f)(i, s[i]);
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
