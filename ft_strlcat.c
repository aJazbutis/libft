/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:25:42 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/28 19:49:05 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	len;
	
	len = 0;
	ld = dstsize;
	while (*dst != 0 && ld != 1)
	{
		dst++;
		ld--;
		len++;
	}
	while (ld != 1 && *src != 0)
	{
		*dst++ = *src++;
		ld--;
		len++;
	}
	*dst = 0;
	return (len);
}




//	if (dstsize == 0 || ft_strlen(dst) > dstsize)
//		return (ret_val);
//	i = ft_strlen(dst);
//	while (i < dstsize -1 && *src)
//	{
//		dst[i] = *src;
//		i++;
//		src++;
//	}
//	dst[i] = '\0';
//	return (ret_val);

