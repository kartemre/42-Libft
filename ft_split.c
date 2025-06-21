/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekartk@student.42istanbul.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:26:55 by ekart             #+#    #+#             */
/*   Updated: 2025/06/18 11:26:57 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word(char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	f;

	i = 0;
	word = 0;
	f = 1;
	while (s[i])
	{
		if (s[i] == c)
			f = 1;
		else if (s[i] != c && f == 1)
		{
			word += 1;
			f = 0;
		}
		i++;
	}
	return (word);
}

static size_t	ft_start(size_t index, char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			word++;
		if (word == index)
			return (i);
		i++;
	}
	return (0);
}

static size_t	ft_len(size_t index, char const *s, char c, size_t start)
{
	size_t	i;
	size_t	word;
	size_t	len;

	i = 0;
	word = 0;
	len = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			word++;
		if (word == index)
		{
			while (s[i] != c && s[i])
				i++;
			len = i - start;
			return (len);
		}
		i++;
	}
	return (0);
}

static void	ft_free(char **dest, size_t i)
{
	while (i > 0)
	{
		free(dest[i]);
		i--;
	}
	free(dest);
}

static char	**ft_fill(char **dest, char const *s, char c)
{
	size_t	w_len;
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	w_len = ft_word(s, c);
	while (i < w_len)
	{
		start = ft_start(i + 1, s, c);
		len = ft_len(i + 1, s, c, start);
		dest[i] = ft_substr(s, start, len);
		if (!dest[i])
		{
			ft_free(dest, w_len);
			return (NULL);
		}
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!dest)
		return (NULL);
	return (ft_fill(dest, s, c));
}
