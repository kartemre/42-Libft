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
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	else if (d < s) //ileri yönde kopyalam
		ft_memcpy(d, s, n);
	else // geri yönde kopyalama çakışmayı önlemek için
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

	// src ve dest aynı dizi içinde, çakışma var
	ft_memmove(str + 2, str, 6);
	printf("Sonuç: %s\n", str); // Beklenen: "ababcd123456"

	return 0;
}
*/