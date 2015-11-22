/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(const char *str, const char *match)
{
	if (!*str)
	{
		if (!*match)
			return (1);
		if (*match == '*')
			return (ft_match(str, match + 1));
	}
	else if (*str == *match)
		return (ft_match(str + 1, match + 1));
	else if (*match == '*')
	{
		if (!match[1])
			return (1);
		return (ft_match(str, match + 1) || ft_match(str + 1, match));
	}
	return (0);
}
