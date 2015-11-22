/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_tabjoin(char **tab)
{
	char	*str;
	char	*tmp;

	if (tab)
	{
		str = ft_strnew(2);
		while (*tab)
		{
			tmp = str;
			str = ft_strjoin(str, *tab);
			free(tmp);
			++tab;
		}
		return (str);
	}
	return (NULL);
}
