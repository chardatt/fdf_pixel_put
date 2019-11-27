#include "libft.h"

t_list			*ft_lstlast(t_list *list)
{
	int i;

	i = 0;
	while (list->next)
	{
		list = list->next;
		i++;
	}
	return (list);
}
