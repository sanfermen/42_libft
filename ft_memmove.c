/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:56:10 by sandrfer          #+#    #+#             */
/*   Updated: 2023/12/18 15:03:22 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ori;
	unsigned char	*des;
	size_t			i;

	ori = (unsigned char *)src;
	des = (unsigned char *)dst;
	i = 0;
	if (ori <= des)
	{
		while (len --)
		{
			des[len] = ori[len];
		}
	}
	else
	{
		while (i < len)
		{
			des[i] = ori[i];
			i++;
		}
	}
	return (dst);
}
