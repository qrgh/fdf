/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstinsert(t_list **lst, t_list *new, int (*cmpf)(void*, void*))
{
	if (*lst == NULL)
		*lst = new;
	else if (cmpf((*lst)->content, new->content) == 0)
	{
		(*lst)->content = new->content;
		free(new);
		return (*lst);
	}
	else
		return (ft_lstinsert(&((*lst)->next), new, cmpf));
	return (*lst);
}
