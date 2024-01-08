/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:48:30 by sandrfer          #+#    #+#             */
/*   Updated: 2023/12/31 14:24:32 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	len = ft_strlen(s);
	while (len != 0)
	{
		if (ptr[len] == (char)c)
			return (ptr + len);
		len--;
	}
	if (ptr[0] == (char)c)
		return (ptr);
	return (0);
}
