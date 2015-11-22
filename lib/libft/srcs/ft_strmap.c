/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	size_t	index;

	if (s && f)
	{
		str = ft_strnew(ft_strlen(s));
		ft_strcpy(str, s);
		if (str == NULL)
			return (NULL);
		index = 0;
		while (str[index])
		{
			str[index] = (*f)(str[index]);
			++index;
		}
		return (str);
	}
	return (NULL);
}
