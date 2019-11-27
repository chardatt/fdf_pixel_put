#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *neue)
{
	if (alst && neue)
	{
		neue->next = *alst;
		*alst = neue;
	}
}
