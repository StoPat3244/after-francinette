/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:49:10 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/27 16:46:21 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*m_src;
	unsigned char	*m_dest;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	m_src = (unsigned char *)src;
	m_dest = (unsigned char *)dest;
	i = 0;
	if (m_src < m_dest)
	{
		while (n-- > 0)
		{
			m_dest[n] = m_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			m_dest[i] = m_src[i];
			i++;
		}
	}
	return (dest);
}
