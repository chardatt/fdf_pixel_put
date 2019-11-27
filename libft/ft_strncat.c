#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = s1;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
