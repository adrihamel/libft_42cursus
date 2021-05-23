#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (lst == NULL)
		return (0);
	aux = lst;
	while (aux->next != NULL)
		aux = aux->next;
	return (aux);
}
