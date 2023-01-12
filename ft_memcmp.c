/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:37:05 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:37:07 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*conv_str1;
	const unsigned char	*conv_str2;
	size_t				i;

	conv_str1 = (unsigned char *)str1;
	conv_str2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while ((conv_str1[i] == conv_str2[i]) && i < (n - 1))
		i++;
	return (conv_str1[i] - conv_str2[i]);
}
/*
int main()
{
	char string[] = "c";
	char comparar[] = "C";
	int x = ft_memcmp(string, comparar, 1);
	printf("%d\n", x);
	return(0);
}*/
