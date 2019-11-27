#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	result = s1;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
