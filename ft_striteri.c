/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:49:56 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:49:58 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	count;

	count = 0;
	if (!s || !f)
		return ;
	while (s[count] != '\0')
	{
		f(count, &s[count]);
		count++;
	}
}
/*
void f(unsigned int i, char c)
{	
	char *p = c;
	i 
}

int main()
{
	char s1[] = "baby SHARK";
	char* s2;
	s2 = ft_striteri(s1, *f);
	printf("%s\n", s2);
}*/
