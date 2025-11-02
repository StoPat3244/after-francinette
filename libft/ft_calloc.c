/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:50:02 by mcarrara          #+#    #+#             */
/*   Updated: 2025/11/02 15:27:54 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*value;
	size_t			i;

	value = (unsigned char *)malloc(nmemb * size);
	if (!value)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
		value[i++] = 0;
	return (value);
}
