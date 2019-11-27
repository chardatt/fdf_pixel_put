#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (alst && del)
	{
		list = *alst;
		while (list)
		{
			(del)(list->content, list->content_size);
			free(list);
			list = list->next;
		}
		*alst = NULL;
	}
}
