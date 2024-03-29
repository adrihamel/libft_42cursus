/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:10:30 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/24 21:16:46 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*aux;

	if (lst == NULL)
		return (0);
	aux = lst;
	cont = 0;
	while (aux->next != NULL)
	{
		cont++;
		aux = aux->next;
	}
	if (aux->next == NULL)
		cont++;
	return (cont);
}
