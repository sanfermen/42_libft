/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:32:34 by sandrfer          #+#    #+#             */
/*   Updated: 2024/01/08 18:49:30 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**end;
	size_t	word_len;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	end = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!end)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			end[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	end[i] = NULL;
	return (end);
}
