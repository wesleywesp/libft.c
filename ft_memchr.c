/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:34:46 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:34:49 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str2;
	size_t			i;

	str2 = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (str2[i] == (unsigned char)c)
			return (str2 + i);
		i++;
		n--;
	}
	return (NULL);
}
/*

#include <string.h>
int main()
{
	char string[] = "baby.shark";
	char search = '.';
	char *x = ft_memchr(string, search, 9);
	printf("%s\n", x);
	char s[] = "baby.shark";
	char w = '.';
	char *i = memchr(s, w, 9);
	printf("%s\n", i);
	return(0);
}*/
