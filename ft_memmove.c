/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekartk@student.42istanbul.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:25:18 by ekart             #+#    #+#             */
/*   Updated: 2025/06/15 19:25:20 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	else if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
int main()
{
	char str[20] = "abcdef123456";
	char *dest;
	char *src;

	dest = str + 4;		//ef123456
	src = str;			//abcdef123456



	// src ve dest aynı dizi içinde, çakışma var
	// ft_memmove(dest, src, 8);
	ft_memmove(dest, src, 8); //abcdef12
	printf("Sonuç: %s\n", dest); // Beklenen: "ababcd123456"

	return 0;
}
*/