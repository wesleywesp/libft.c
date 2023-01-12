/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:04:27 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:04:28 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (lensrc);
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}
/*
int main()
{
	char sorce [] = "baby shark";
	char dest[] = "cuco";
	printf("%s\n%s\n", sorce, dest);
	ft_strlcpy(dest, sorce, 0);
	printf("%s\n%s\n", sorce, dest);
	return(0);
}*/
