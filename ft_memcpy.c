/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:38:39 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:38:40 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest2;
	const unsigned char		*src2;
	size_t					i;

	if (!dest && !src)
	{
		return (NULL);
	}
	dest2 = (unsigned char *) dest;
	src2 = (const unsigned char *) src;
	i = 0;
	while (n > 0)
	{
		dest2[i] = src2[i];
		i++;
		n--;
	}
	return (dest2);
}
/*
int main ()
{
	char dest[] = "cuco";
	char src [] = "baby shark";
	printf("%s\n", dest);
	ft_memcpy(dest, src, 4);
	printf("%s\n", dest);
	return(0);
}*/
