/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:34:58 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/27 14:38:19 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*here;
	char	hay[420];
	char	*p_hay;

	if (*needle == '\0')
		return ((char *)haystack);
	here = NULL;
	ft_strlcpy(hay, haystack, len + 1);
	p_hay = &hay[0];
	while (*p_hay)
	{
		if (ft_strncmp(p_hay, needle, ft_strlen(needle)) == 0)
		{
			here = (char *)haystack;
			return (here);
		}
		else
		{
			p_hay++;
			haystack++;
		}
	}
	return (here);
}
