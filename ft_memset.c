/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:37:49 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/31 20:46:14 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b_char;
	size_t	i;

	i = 0;
	b_char = b;
	if (b == NULL)
		return (b);
	while (i < len)
	{
		b_char[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
