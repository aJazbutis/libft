/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:12:06 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/09/07 18:24:50 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	if (!s)
		return (NULL);
	sub_str = NULL;
	sub_str = (char *)ft_calloc(sizeof(char), (len + 1));
	if (start > ft_strlen(s))
		return (sub_str);
	if (!sub_str)
		return (sub_str);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
