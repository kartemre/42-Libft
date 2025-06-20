/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekartk@student.42istanbul.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:24:39 by ekart             #+#    #+#             */
/*   Updated: 2025/06/15 19:24:42 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char str[20] = "abcdef123456";
	char *dest;
	char *src;

	dest = str + 4;		//abcdabcd
	src = str;			//abcdabcdabcd
						//abcdabcd		
	// src ve dest aynı dizi içinde, çakışma var
	// ft_memmove(dest, src, 8);
	ft_memcpy(dest, src, 8); //abcdef12
	printf("Sonuç: %s\n", src); // Beklenen: "ababcd123456"

	return 0;
}
*/