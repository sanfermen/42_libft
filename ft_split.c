/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:32:34 by sandrfer          #+#    #+#             */
/*   Updated: 2024/01/09 18:53:31 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	n;

	n = 0;
	while (s[n] != c && s[n] != '\0')
	{
		n++;
	}
	return (n);
}

static char	**ft_free(const char **str, size_t len)
{
	while (len--)
	{
		free((void *)str[len]);
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_countwords(s, c);
	str = (char **)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		str[i] = (char *)malloc((ft_numchar(s, c) + 1) * sizeof(char));
		if (!str[i])
			return (ft_free((const char **)str, i));
		ft_strlcpy(str[i], s, (ft_numchar(s, c) + 1));
		s = ft_strchr(s, (int)c);
		i++;
	}
	str[i] = 0;
	return (str);
}
