/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelcmp(t_list **root, void *ct, int (*cmpf)(void*, void*),
			void (*del)(void*, size_t))
{
	if (!*root)
		;
	else if (cmpf((*root)->content, ct) != 0)
		ft_lstdelcmp(&((*root)->next), ct, cmpf, del);
	else
		ft_lstdelone(root, del);
}
