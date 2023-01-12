/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:06:39 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:06:40 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && str1[i] && str2[i] && (len - 1) > 0)
	{
		i++;
		len--;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int main()
{
	char string[] = "abcd";
	char compara[] = "ABCD";
	int resultado = ft_strncmp(string, compara, 4);
	printf("%d\n", resultado);

	return(0);

}*/
