#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = (unsigned char *)malloc(sizeof(*ptr) * size)))
		return (NULL);
	while (i < size)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
