/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:52:33 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/08/26 16:20:14 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	set_sign;

	i = 0;
	set_sign = 1;
	while (*str == 32 || (*str >= 8 && *str <= 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			set_sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * set_sign);
}
