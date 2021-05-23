#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL || lst == NULL)
		return ;
	while (lst)
	{
		//f(lst->content);
		f(lst);
		lst = lst->next;
	}
}	