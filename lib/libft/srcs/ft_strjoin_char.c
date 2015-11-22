/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin_char(const char *s1, char c, const char *s2)
{
	char		*str;
	size_t		lens1;
	size_t		lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = ft_strnew(lens1 + lens2 + 3);
	if (!str)
		return (NULL);
	ft_strncpy(str, s1, lens1);
	str[lens1] = c;
	ft_strncpy(str + lens1 + 1, s2, lens2);
	return (str);
}
