/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:22:19 by mcarrara          #+#    #+#             */
/*   Updated: 2025/11/02 16:46:05 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_w(char const *s, char c)
{
	int		count;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			count++;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*ft_free(char **array, int i)
{
	while (i-- > 0)
		free(array[i]);
	free(array);
	return (NULL);
}

static char	**ft_fill_str(char **dest, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = ft_word_len(s, c);
			dest[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (!dest[i])
			{
				ft_free(dest, i);
				return (NULL);
			}
			ft_strlcpy(dest[i], s, len + 1);
			i++;
			s += len;
		}
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**str_split;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_w(s, c);
	str_split = (char **)malloc(sizeof(char *) * (words + 1));
	if (str_split == 0)
		return (NULL);
	str_split = ft_fill_str(str_split, s, c);
	if (!str_split)
		return (NULL);
	str_split[words] = NULL;
	return (str_split);
}
