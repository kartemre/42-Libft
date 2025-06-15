/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekartk@student.42istanbul.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:11:27 by ekart             #+#    #+#             */
/*   Updated: 2025/06/11 20:20:40 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)s;
	while (n--)
		*dest++ = (unsigned char)c;
	return (s);
}

/*
int main()
{
	//char i[10] = "123456789";
	//ft_memset(i, '*', 5);
	int a[2] = {123, 380};
	ft_memset(a + 1, 255, 4);
	ft_memset(a + 1, 252, 2);
	ft_memset(a + 1, 24, 1);


	char k[] = "abcdef";
	ft_memset(k, 0, 6);
	ft_memset(k, 'e', 4);
	ft_memset(k, 'r', 3);
	ft_memset(k, 'm', 2);
	ft_memset(k, 'e', 1);
	// ft_memset(i, 227, 4);
	// ft_memset(i, 255, 3); 
	// ft_memset(i, 227, 2); 
	// ft_memset(i, 224, 1); 

	printf("%d\n", a[0]);  // *****6789
	printf("%d\n", a[1]);  // *****6789
	printf("%s\n", k);
}
*/
/*
int main()
{
	char *str = malloc(3);
	if (!str)
		return (1);
	ft_memset(str, 0, 3);
	ft_memset(str, 182, 2);
	ft_memset(str, 195, 1);
	printf("%s\n", str);

	free(str);
}
*/