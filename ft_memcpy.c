/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:34:28 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/14 12:01:16 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*aux1;
	char	*aux2;
	size_t	i;

	i = 0;
	aux1 = (char *) dst;
	aux2 = (char *) src;
	while (i < n)
	{
		aux1[i] = aux2[i];
		i++;
	}
	return (dst);
}
/*int main (void)
{
	char src[] = "hola mundo";
	char dst[80];
	char dst2[80];

	ft_memcpy(dst,src,80);
	memcpy(dst2,src,80);
	
	printf("ft es -%s-\n", dst);
	printf("orignial es -%s-\n", dst2);

	return (0);
}*/
