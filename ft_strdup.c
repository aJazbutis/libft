/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:08:06 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/31 11:29:49 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	l;

	dst = NULL;
	l = ft_strlen(s1);
	dst = malloc(l + 1);
	ft_strlcpy(dst, s1, l + 1);
	return (dst);
}
