/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:33 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:12:07 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nlen(const char *s)
{
	if (*s && (*s >= 48 && *s <= 57))
		return (ft_nlen(s + 1) + 1);
	return (0);
}

static int		ft_atoi_deux(const char *str)
{
	int			a;

	if (*str && (*str >= 48 && *str <= 57))
	{
		a = (*str - 48) * ft_pow(10, ft_nlen(str) - 1);
		return (ft_atoi_deux(str + 1) + a);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		return (-1 * ft_atoi_deux(str + 1));
	if (*str == '+')
		return (ft_atoi_deux(str + 1));
	return (ft_atoi_deux(str));
}
