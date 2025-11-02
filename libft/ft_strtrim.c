/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:24:31 by mcarrara          #+#    #+#             */
/*   Updated: 2025/11/01 14:32:25 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_check(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_str;

	if (!s1 || !set)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	end--;
	while (start <= end && to_check(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (to_check(set, s1[end]))
		end--;
	new_str = (char *)malloc(sizeof(char) * end - start + 2);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1 + start, end - start + 2);
	return (new_str);
}
