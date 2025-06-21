/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekartk@student.42istanbul.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:13:55 by ekart             #+#    #+#             */
/*   Updated: 2025/06/21 13:13:57 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;
	int		c;

	nb = (long)n;
	c = 0;
	len = ft_intlen(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		nb = -nb;
		res[0] = '-';
		c = 1;
	}
	while (len > c)
	{
		len--;
		res[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}
