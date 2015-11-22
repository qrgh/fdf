/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 19:14:34 by cglavieu          #+#    #+#             */
/*   Updated: 2015/05/08 10:40:42 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;
	char	*t;

	i = 0;
	mem = (void *)malloc(size * sizeof(void));
	t = (char *)mem;
	if (mem != NULL)
	{
		while (i < size)
		{
			*t++ = 0;
			i++;
		}
	}
	return (mem);
}
