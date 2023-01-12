/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:46:48 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:46:49 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != c)
	{
		if (!str[i])
			return (NULL);
		i++;
	}
	return ((char *) str + i);
}
/*
int main()
{
	char string[] ="baby1 shark1 baby";
	char c = '1';
	char *x = ft_strchr(string, c);
	printf("%s\n", x);
	return(0);
}*/
