/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:41:28 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:41:30 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else if (src > dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
/*int main()
{
	char string[] = "baby shank";
	char destino[]= "";

	printf("%s\n%s\n", string, destino);

	ft_memmove(destino, string, 15);
	printf("%s\n%s\n", string, destino);
	return(0);
}*/
