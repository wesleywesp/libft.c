/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:12:38 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:12:39 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pont;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		pont = malloc(1 * sizeof(char));
		if (!pont)
			return (NULL);
		pont[0] = '\0';
		return (pont);
	}
	pont = malloc((len + 1) * sizeof(char));
	if (pont == NULL)
		return (NULL);
	while (start < ft_strlen(s) && len > 0)
	{
		pont[i++] = s[start++];
		len --;
	}
	pont[i] = '\0';
	return (pont);
}
/*
int main()
{
	char string[] = "baby shark";
	char *x = ft_substr(string, 2, 7);
	printf("%s\n", x);
	return(0);
}*/