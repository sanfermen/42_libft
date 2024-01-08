/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:14:08 by sandrfer          #+#    #+#             */
/*   Updated: 2024/01/07 18:05:18 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*numb;
	const char	*digits;

	len = ft_nlen(n);
	digits = "0123456789";
	numb = (char *)malloc(sizeof(char) * (len + 1));
	if (!numb)
		return (NULL);
	numb[len] = '\0';
	if (n == 0)
		numb[0] = '0';
	if (n < 0)
		numb[0] = '-';
	while (n)
	{
		if (n > 0)
			numb[--len] = digits[n % 10];
		else
			numb[--len] = digits[(n % 10) * -1];
		n /= 10;
	}
	return (numb);
}
