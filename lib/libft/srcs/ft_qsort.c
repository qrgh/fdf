/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qsort(void **tab, size_t size, int (*cmp)(void*, void*))
{
	void	*p;
	void	**l;
	void	**r;
	void	*t;

	l = tab;
	p = tab[size / 2];
	r = tab + size - 1;
	if (size < 2)
		return ;
	while (l <= r)
	{
		if (cmp(*l, p) < 0)
			l++;
		if (cmp(*r, r) > 0)
			r--;
		t = *l;
		*l++ = *r;
		*r-- = t;
	}
	ft_qsort(tab, r - tab + 1, cmp);
	ft_qsort(l, tab + size - l, cmp);
}
