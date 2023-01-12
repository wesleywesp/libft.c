/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:48:14 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:48:15 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *string)
{
	char	*pont;
	int		i ;

	i = 0;
	pont = ft_calloc(ft_strlen(string) + 1, sizeof(char));
	if (!pont)
		return (NULL);
	while (string[i] != '\0')
	{
		pont[i] = string[i];
		i++;
	}
	pont[i] = '\0';
	return (pont);
}
/*
int main()
{
    char fonte[] = "baby shark";
    char* target = ft_strdup(fonte);
 
    printf("%s, %s", target, fonte);
    return 0;
}*/
