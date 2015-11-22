/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rrand(int start, int end)
{
	if (start < end)
		return (start + (ft_rand() % (end - start)));
	return (-1);
}
