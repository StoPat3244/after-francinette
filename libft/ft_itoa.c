/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:49:49 by mcarrara          #+#    #+#             */
/*   Updated: 2025/11/01 18:57:53 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long nb)
{
	int	len;

	if (nb < 0)
		nb *= -1;
	len = 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static int	ft_divisor(int c)
{
	int	i;

	i = 1;
	while (c-- > 1)
		i *= 10;
	return (i);
}

static char	*ft_fill_str(char *str, long nb, int divisor)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		str[i++] = '-';
		nb *= -1;
	}
	while (divisor > 0)
	{
		str[i++] = nb / divisor + 48;
		nb %= divisor;
		divisor /= 10;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		divisor;
	long	nb;
	char	*cfr;

	nb = (long)n;
	len = ft_length(nb);
	divisor = ft_divisor(len);
	if (nb < 0)
		len++;
	cfr = (char *)malloc(sizeof(char) * len + 1);
	if (!cfr)
		return (NULL);
	cfr = ft_fill_str(cfr, nb, divisor);
	return (cfr);
}
