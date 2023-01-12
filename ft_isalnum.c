/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:23:40 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:23:42 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isalnum(int arg)
{
	if (arg >= '0' && arg <= '9')
	{
		return (1);
	}
	else if (arg >= 'a' && arg <= 'z')
	{
		return (1);
	}
	else if (arg >= 'A' && arg <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
/*int main()
{
	int v = 3;
	printf("%d", ft_isalnum(v));

	return(0);
}*/
