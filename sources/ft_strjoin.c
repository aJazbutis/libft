/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:57:48 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/06/06 18:55:54 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	l1;
	size_t	l2;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s = NULL;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s = (char *)ft_calloc(l1 + l2 + 1, sizeof(char));
	if (!s)
		return (s);
	ft_strlcpy(s, s1, l1 + 1);
	ft_strlcat(s, s2, l1 + l2 + 1);
	return (s);
}
