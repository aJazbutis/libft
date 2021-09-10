/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:34:56 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/09/07 18:29:03 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*e;

	if (!s1 || !set)
		return (NULL);
	s = NULL;
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
