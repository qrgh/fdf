/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	index1;
	size_t	index2;

	index1 = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[index1])
	{
		index2 = 0;
		while (s1[index1 + index2] &&
			s2[index2] && s2[index2] == s1[index1 + index2])
			index2++;
		if (!s2[index2])
			return (char*)(s1 + index1);
		index1++;
	}
	return (NULL);
}
