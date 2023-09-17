/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:42:49 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 16:30:15 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*aux1;
	char	*aux2;
	size_t	i;

	aux1 = (char *)src;
	aux2 = (char *)dst;
	i = 0;
	if (aux2 > aux1)
	{
		while (len > 0)
		{
			aux2[len] = aux1[len];
		}
	}
	else
	{
		while (i < len)
		{
			aux2[i] = aux1[i];
			i++;
		}
	}
	return (dst);
}
/*int main (void){

	char src[] = "Hola mo";
	char dst[80];
	char dst1[80];

	ft_memmove(dst,src, 11);
	memmove(dst1,src,11);
	
	printf("ft es -%s- \n",dst);
	printf("original es -%s-\n",dst1);
	return(0);
}*/
