/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_randinit(int seed)
{
	int	*array;
	int	i;

	if ((array = ft_getrand_array()) != NULL)
	{
		array[0] = seed;
		i = 1;
		while (i < RAND_SIZE)
		{
			array[i] = 1812433253
				* (array[i - 1] ^ (array[i - 1] >> 30))
				+ i;
			++i;
		}
		return (1);
	}
	return (0);
}
