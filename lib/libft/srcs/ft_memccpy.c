/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			tmp;
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	tmp = 0;
	s1_tmp = (unsigned char*)s1;
	s2_tmp = (unsigned char*)s2;
	while (tmp != n)
	{
		*(s1_tmp + tmp) = *(s2_tmp + tmp);
		if (*(s2_tmp + tmp) == c)
			return (s1_tmp + tmp + 1);
		tmp++;
	}
	return (NULL);
}
