#include "libft.h"

char		*ft_strjoindel(char *s1, char const *s2)
{
	char	*new;
	size_t	size;

	new = NULL;
	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		if (!(new = ft_strnew(size)))
			return (NULL);
		new = ft_strcpy(new, s1);
		ft_strdel(&s1);
		new = ft_strcat(new, s2);
	}
	return (new);
}
