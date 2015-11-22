/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

void	ft_putbase(long l, int base, char *letters)
{
	if (l == LONG_MIN)
	{
		ft_putbase(l / base, base, letters);
		ft_putbase(-(l % base), base, letters);
	}
	else if (l < 0 && l != LONG_MIN)
	{
		ft_putchar('-');
		ft_putbase(-l, base, letters);
	}
	else if (l >= base)
	{
		ft_putbase(l / base, base, letters);
		ft_putbase(l % base, base, letters);
	}
	else
		ft_putchar(letters[l]);
}
