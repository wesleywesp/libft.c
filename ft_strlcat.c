/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:00:42 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:03:36 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat( char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	j_dest;
	size_t	i;

	len_src = ft_strlen(src);
	if (dest)
	len_dest = ft_strlen(dest);
	else
		len_dest = 0;
	j_dest = len_dest;
	i = 0;
	if (size == 0 || size < len_dest)
		return (len_src + size);
	while (src[i] != '\0' && j_dest < (size - 1))
	{
		dest[j_dest] = src[i];
		j_dest++;
		i++;
	}
	dest[j_dest] = '\0';
	return (len_dest + len_src);
}
/*
int main(){
    char sorce[] ="baby shark";
    char destino[] = "cuco";
    ft_strlcat(destino, sorce, 15);
    printf("%s\n", destino);
}*/
