/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:09:26 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:09:27 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	i_s2;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(s2);
	if (n == 0 && !s1)
		return (0);
	if (s2[0] == '\0')
		return ((char *) s1);
	while (s1[i] != '\0' && i < n)
	{
		i_s2 = 0;
		if (s1[i] == s2[0])
		{
			while (s1[i + i_s2] == s2[i_s2] && s2[i_s2] != '\0' && i + i_s2 < n)
			{
				if (len_needle - 1 == i_s2)
					return ((char *) s1 + i);
				i_s2++;
			}
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char string[] ="baby shark baby";
	char search2[] = "shark";
	char *x = ft_strnstr(string, search2, 10);
	printf("%s\n", x);
	return(0);
}
*/