/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:11:58 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:12:01 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set,*s1) && *s1)
		s1++;
	len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
/*
int main()
{
	char string[] = "baby sahrk";
	char trim [] = " ";
	char *x = ft_strtrim(string, trim);
	printf("%s\n", x);
	return(0);
}*/
