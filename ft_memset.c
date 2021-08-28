/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:37:49 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/25 14:48:57 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*b_char;
	unsigned char	x;

	i = 0;
	b_char = b;
	x = (unsigned char)c;
	if (b == NULL)
		return (b);
	while (i < len)
	{
		b_char[i] = x;
		i++;
	}
	return (b);
}
