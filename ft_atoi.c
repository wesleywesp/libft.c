/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:07:55 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:09:06 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	flag;
	int	count;

	flag = 0;
	nb = 0;
	count = 0;
	while (nptr[count] == '\t' || nptr[count] == '\n' || nptr[count] == '\r'
		|| nptr[count] == '\v' || nptr[count] == ' ' || nptr[count] == '\f')
		count++;
	if (nptr[count] == '+' && nptr[count + 1] != '-')
		count++;
	if (nptr[count] == '-')
	{
		flag = 1;
		count++;
	}
	while (nptr[count] >= 48 && nptr[count] <= 57)
	{
		nb = nb * 10 + nptr[count] - 48;
		count++;
	}
	if (flag == 1)
		nb *= -1;
	return (nb);
}
/*
int main()
{
	char string[] = "- -455478";
	int val = ft_atoi(string);
	char string2[] = "baby";
	int val2 = ft_atoi(string2);

	printf("%d\n %d\n", val, val2);
	return(0);
}*/
