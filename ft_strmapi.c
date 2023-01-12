/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:05:20 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 14:05:21 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (NULL);
	i = 0;
	p = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}
/*
char f(unsigned int i, char c)
{
	if(c >= 'a' && c <= 'z')
		return(c -= 32);

	if (c >= 'A' && c <= 'Z')
		return(c += 32);
	else 
	return(c);
}

int main()
{
	char s1[] = "baby SHARK";
	char* s2;
	s2 = ft_strmapi(s1, *f);
	printf("%s\n", s2);
}*/