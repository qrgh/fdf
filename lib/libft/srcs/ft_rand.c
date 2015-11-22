/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		generate_number(int ret[])
{
	int			i;
	int			t;

	i = 0;
	while (i < RAND_SIZE)
	{
		t = (ret[i] & 0x80000000)
			+ (ret[(i + 1) % RAND_SIZE] & 0x7fffffff);
		ret[i] = ret[(i + 397) % RAND_SIZE] ^ (t >> 1);
		if ((t % 2) != 0)
			ret[i] = ret[i] ^ (2567483615);
		++i;
	}
}

int				ft_rand(void)
{
	static int	index = 0;
	int			*ret;
	int			tmp;

	if ((ret = ft_getrand_array()) == NULL)
		return (-1);
	if (index == 0)
		generate_number(ret);
	tmp = ret[index];
	tmp = tmp ^ (tmp >> 11);
	tmp = tmp ^ ((tmp << 7) & (2636928640));
	tmp = tmp ^ ((tmp << 15) & (4022730752));
	tmp = tmp ^ (tmp >> 18);
	index = (index + 1) % RAND_SIZE;
	return (tmp);
}
