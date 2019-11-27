#include "libft.h"

char		*ft_strsubdel(char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = NULL;
	if (s)
	{
		if (!(new = ft_strnew(len)))
			return (NULL);
		while (i < len)
		{
			new[i] = s[start + i];
			i++;
		}
		new[i] = '\0';
	}
	ft_strdel(&s);
	return (new);
}
