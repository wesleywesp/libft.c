/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_tolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:16:51 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:16:53 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_tolower(int argument)
{
	if (argument >= 65 && argument <= 90)
		return (argument + 32);
	else
		return (argument);
}
/*
int main()
{
	char c = 'Z';
	printf("%c\n", ft_tolower(c));
}*/
