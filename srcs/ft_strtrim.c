/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:34:56 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/09/16 20:12:12 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*e;
	int		start;

	if (!s1 || !set)
		return (NULL);
	s = (char *)s1;
	start = 0;
	while (ft_strchr(set, *s))
	{
		start++;
		s++;
	}
	e = (char *)s1;
	while (*e)
		e++;
	if (e == s)
		return ((char *)ft_calloc(sizeof(char), 1));
	while (ft_strchr(set, *(--e)));
	return (ft_substr(s1, start, (e - s + 1)));
}

/*	
	s = ft_strdup(s1);
	if (!s)
		return (s);
	while (ft_strchr(set, *s))
	{
		ft_memmove(s, s + 1, ft_strlen(s));
		if (*s == 0)
			return (s);
	}
	e = s;
	while (*e)
		e++;
	while (ft_strchr(set, *(--e)))
		*e = 0;
	return (s);
}
*/
