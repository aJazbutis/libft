/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:44:11 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/27 15:11:42 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = (char)c;
	if (*s == '\0' && x == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == x)
			return ((char *)s);
		s++;
		if (*s == '\0' && x == '\0')
			return ((char *)s);
	}
	return (NULL);
}
