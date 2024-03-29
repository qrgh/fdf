/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_64.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_64(uint64_t l)
{
	if (l >= 16)
	{
		ft_puthex(l / 16);
		ft_puthex(l % 16);
	}
	else
		ft_putchar(HEX[l]);
}
