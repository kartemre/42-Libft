/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekartk@student.42istanbul.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 19:16:48 by ekart             #+#    #+#             */
/*   Updated: 2025/06/11 19:16:50 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (nptr[i] == '\v' || nptr[i] == '\f'
		|| nptr[i] == '\r' || nptr[i] == '\t'
		|| nptr[i] == '\n' || nptr[i] == '\0')
		i++;
	if (nptr[i] != '\0' && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && ft_isdigit(nptr[i] - '0'))
		nbr = ((nbr * 10) + (nptr[i++] - '0'));
	nbr = sign * nbr;
	return (nbr);
}
/*
int main ()
{
	printf("%d\n", ft_atoi("+6546"));
	printf("%d\n", atoi("--756"));
}
*/