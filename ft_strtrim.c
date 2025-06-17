/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekartk@student.42istanbul.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:23:56 by ekart             #+#    #+#             */
/*   Updated: 2025/06/17 17:23:58 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_control(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char *ft_newstr(char const *s1, char const *set)
{
	size_t	i;
	size_t	s_len;
	size_t	j;
	size_t	a;
	char	*res;

	i = 0;
	while (s1[i] && ft_control(s1[i], set))
		i++;
	j = 0;
	s_len = ft_strlen(s1);
	while (s1[s_len - j - 1] && ft_control(s1[s_len - j - 1], set))
		j++;
	res = (char *)malloc(s_len - i - j + 1);
	if (!res)
		return (NULL);
	a = 0;
	while (a < s_len - i - j)
	{
		res[a] = s1[i + a];
		a++;
	}
	res[a] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;

	if (!s1 || !set)
		return(NULL);
	res = ft_newstr(s1, set);
	return (res);
}
