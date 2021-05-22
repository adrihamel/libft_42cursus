/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:42:11 by aguerrer          #+#    #+#             */
/*   Updated: 2021/05/20 19:47:43 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
		s++;
	s--;
	while (*s != '\0')
	{
		if (*s == ((char)c))
			return ((char *)s);
		s--;
	}
	if (((char)c) == '\0')
		return ((char *)s);
	return (0);
}
