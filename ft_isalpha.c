/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:13:49 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:13:51 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int input)
{
	if (input >= 'A' && input <= 'Z')
	{
		return (1);
	}
	else if (input >= 'a' && input <= 'z')
	{
		return (2);
	}
	return (0);
}
/*int main()
{
	char c = '2';
	printf("%d\n", ft_isalpha(c));
}*/
