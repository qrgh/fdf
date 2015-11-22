/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	ft_double(double d, double epsilone)
{
	if (d >= 10)
	{
		ft_double(((long)d / 10) + (d - (long)d), epsilone);
		ft_double((long)d % 10, epsilone);
	}
	else if (d - (long)d > epsilone && d - (long)d < 1 - epsilone)
		ft_double((long)((d - (long)d) / (epsilone)), epsilone);
	else
		ft_putchar((long)d + 48);
}

void		ft_putdouble(double d, double epsilone)
{
	if (d < 0)
	{
		ft_putchar('-');
		d *= -1;
	}
	if (d - (long)d < 1 - epsilone)
		ft_double((long)d, epsilone);
	ft_putchar('.');
	ft_double(d - (long)d, epsilone);
}
