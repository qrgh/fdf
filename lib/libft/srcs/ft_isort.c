/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:33 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:33 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		**ft_isort(void **tab, size_t size, int (*cmp)(void*, void*))
{
	size_t	i;
	size_t	j;
	void	*value;

	i = 1;
	while (i < size)
	{
		value = tab[i];
		j = i;
		while (j > 0 && cmp(tab[j - 1], tab[j]) > 0)
		{
			tab[j - 1] = tab[j];
			--j;
		}
		tab[j] = value;
		++i;
	}
	return (tab);
}
