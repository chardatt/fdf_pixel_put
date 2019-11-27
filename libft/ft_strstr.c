#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char *a;
	char *b;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		a = (char *)haystack;
		b = (char *)needle;
		while (*a != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		while (*b == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
