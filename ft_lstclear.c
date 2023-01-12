/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:27:47 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:27:51 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*sublst;
	t_list	*next;

	if (!lst)
		return ;
	sublst = *lst;
	while (sublst)
	{
		next = sublst->next;
		ft_lstdelone(sublst, del);
		sublst = next;
	}
	*lst = NULL;
}
