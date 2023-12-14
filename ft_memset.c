/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:17:15 by sandrfer          #+#    #+#             */
/*   Updated: 2023/12/14 11:57:29 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			n;
	unsigned char	*ptr;

	n = 0;
	ptr = (unsigned char *)b;
	while (n < len)
	{
		ptr[n] = (unsigned char)c;
		n++;
	}
	return (b);
}
