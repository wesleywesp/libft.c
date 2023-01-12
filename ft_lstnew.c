/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:33:54 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:33:58 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*lista;

	lista = (t_list *) malloc(sizeof(t_list));
	if (lista != NULL)
	{
		lista->content = content;
		lista->next = NULL;
	}
	return (lista);
}
