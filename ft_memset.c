/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:42:13 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:42:16 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *) str;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (p);
}
/*int main()
{
	char string[] = "baby shark";
	char c = '$';
	printf("%s\n%s\n", string, ft_memset(string, c, 5));
	return (0);
}*/
