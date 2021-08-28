/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:05:45 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/27 19:53:55 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_c;
	const char		*src_c;
	size_t			i;
	unsigned char	chr;

	i = 0;
	chr = (unsigned char)c;
	dst_c = dst;
	src_c = src;
	while (i < n)
	{
		dst_c[i] = src_c[i];
		if (dst_c[i] == chr)
			return (&dst_c[i + 1]);
		i++;
	}
	return (NULL);
}
