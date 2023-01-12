/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:45:48 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:45:50 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	palavras(char const *s, char c)
{
	int	i;
	int	contagem;

	i = 0;
	contagem = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
			contagem++;
	}
	return (contagem);
}

static size_t	get_pos_final(char const *s, int *i, char c)
{
	size_t	x;

	x = *i;
	while (s[*i] && s[*i] != c)
		*i += 1;
	return (*i - x);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		x;
	int		pos;
	int		res_size;

	if (!s)
		return (0);
	i = 0;
	x = 0;
	pos = 0;
	res_size = palavras(s, c);
	res = malloc(sizeof(char *) * (res_size + 1));
	if (!res)
		return (0);
	while (x < res_size)
	{
		while (s[i] == c && s[i])
			i++;
		pos = i;
		res[x] = ft_substr(s, pos, get_pos_final(s, &i, c));
		x++;
	}
	res[x] = NULL;
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	char *texto = "baby shark";
	char delimiter = 's';
	char **array;
	int size;
	int i;
	i = 0;
	size = 2;
	array = ft_split(texto, delimiter);
	while(i < size)
	{
		printf("->%s\n", array[i++]);
	}
	printf("->%s", array[i]);
	return(0);
}*/
