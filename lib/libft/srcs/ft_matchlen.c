/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matchlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_starskip(const char *m, size_t *m_i)
{
	while (m[(*m_i) + 1] == '*')
		++(*m_i);
}

static void		ft_starmatch(char *s, char *m, size_t *s_i, size_t *m_i)
{
	if (s[(*s_i)] && m[(*m_i) + 1] != s[(*s_i) + 1])
		++(*s_i);
	else
	{
		++(*m_i);
		++(*s_i);
	}
}

size_t			ft_matchlen(const char *str, const char *match)
{
	size_t	m_i;
	size_t	s_i;

	m_i = 0;
	s_i = 0;
	while (match[m_i])
	{
		if (str[s_i] == match[m_i])
		{
			++m_i;
			++s_i;
		}
		else if (match[m_i] == '*')
		{
			ft_starskip(match, &m_i);
			if (!match[(m_i) + 1])
				return ((s_i) + ft_strlen(str + s_i));
			else if (!str[s_i])
				return (0);
			ft_starmatch((char*)str, (char*)match, &s_i, &m_i);
		}
		else
			return (0);
	}
	return (s_i);
}
