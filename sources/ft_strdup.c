/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:08:06 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/05/05 21:15:05 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	l;

	dst = NULL;
	if (!s1)
		return (NULL);
	l = ft_strlen(s1);
	dst = (char *)malloc(l + 1);
	if (!dst)
		return (dst);
	ft_strlcpy(dst, s1, l + 1);
	return (dst);
}
