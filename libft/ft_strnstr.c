#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && (i + j < len) && needle[j] != '\0'
		&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
