#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	new = NULL;
	if (s)
	{
		if (!(new = (char*)malloc(sizeof(*new) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[i] != '\0')
		{
			new[i] = (*f)(s[i]);
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
