/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:21:16 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:21:30 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*goend;

	if (!*lst)
	{
		(*lst) = new;
		return ;
	}
	goend = *lst;
	while (goend->next != NULL)
		goend = goend->next;
	goend->next = new;
}
