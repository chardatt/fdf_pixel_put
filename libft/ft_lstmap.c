#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *check_new;

	if (lst && f)
	{
		if (!(new = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		new = f(lst);
		check_new = new;
		while (lst->next)
		{
			check_new->next = f(lst->next);
			check_new = check_new->next;
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}
