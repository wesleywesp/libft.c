/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:10:54 by wearaujo          #+#    #+#             */
/*   Updated: 2022/12/07 13:10:58 by wearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*pont;

	pont = malloc(nitems * size);
	if (!pont)
		return (NULL);
	ft_bzero(pont, nitems * size);
	return (pont);
}
/*void *mallocc (size_t nbytes);
int main()
{
	char c[] = "string";
	printf("%s\n", c);
	char *x = c;
	x = ft_calloc(ft_strlen(c), sizeof(char));
	printf("%s\n", x);
}
*/
