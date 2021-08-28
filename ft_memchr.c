/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:18:14 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/27 20:03:17 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	chr;
	size_t			i;

	i = 0;
	chr = (unsigned char)c;
	str = (char *)s;
	while (i < n)
	{
		if (*str == chr)
			return (str);
		i++;
		str++;
		if (chr == '\0' && *str == chr )
			return (str);

	}
	return (NULL);
}

