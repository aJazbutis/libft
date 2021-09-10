/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _bonus.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:51:37 by ajazbuti          #+#    #+#             */
/*   Updated: 2021/09/10 18:47:57 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//#include "_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (head)
	{
		(*head).content = content;
		(*head).next = NULL;
	}
	return (head);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (!new)
		return ;
	while (current->next)
		current = current->next;
	current->next = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstdelalone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (*lst)
	{
		current = *lst;
		while (current->next)
		{
			del(current->content);
			free(current);
			current = (*current).next;
		}
		free(*lst);
	}
}


void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

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



int	main(int argc, char **argv)
{
	t_list	*list;
	t_list	*new;
	t_list	*current;
	int		i;

	i = 0;
	current = NULL;
	new = NULL;
	list = NULL;
	list = ft_lstnew(argv[i]);
	printf("%d\n", ft_lstsize(list));
	while (argv[++i])
	{
		new = ft_lstnew(argv[i]);
		ft_lstadd_front(&list, new);
	}
	printf("%d\n", ft_lstsize(list));
	current = list;
	while (current != NULL)
	{
		printf("%s\n", current->content);
		current = (*current).next;
	}
//	current = list;
//	while (current != NULL)
//	{
//		printf("%s\n", current->content);
//		current = (*current).next;
//	}
	current = list;
	current = ft_lstlast(current);
	printf("%s\n", current->content);
	while (list != NULL)
	{
		free(list);
		list = (*list).next;
	}
	i = 0;
	list = ft_lstnew(argv[i]);
	while (argv[++i])
	{
		new = ft_lstnew(argv[i]);
		ft_lstadd_back(&list, new);
	}
	printf("%d\n", ft_lstsize(list));
	current = list;
	while (current != NULL)
	{
		printf("%s\n", current->content);
		current = (*current).next;
	}
	while (list != NULL)
	{
		free(list);
		list = (*list).next;
	}
//	free(new);
//	free(list);
	return (0);
}
