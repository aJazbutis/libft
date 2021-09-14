/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:29:57 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/09/13 12:30:17 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew((*f)(lst->content));
	if (!new_lst)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&new_lst, (*f)(lst->content));
		if (!ft_lstlast(new_lst))
		{
			while (new_lst)
			{
				del(new_lst->content);
				free(new_lst);
				new_lst = new_lst->next;
			}
			new_lst = NULL;
		}
		lst = lst->next;
	}
	return (new_lst);
}
