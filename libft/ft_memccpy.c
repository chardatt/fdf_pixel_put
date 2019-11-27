#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	cp;

	cp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		if (((unsigned char *)dst)[i - 1] == cp)
			return (&((unsigned char *)dst)[i]);
	}
	return (NULL);
}
