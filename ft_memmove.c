/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 18:26:12 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/27 18:53:48 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	temp[420];
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	ft_memcpy(temp, src, len);
	ft_memcpy(d, temp, len);
	return (d);
}
