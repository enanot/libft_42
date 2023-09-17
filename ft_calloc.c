/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:35:34 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 16:31:56 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (malloc (count * size));
	if (ret == NULL)
		return (NULL);
	while (i < size)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
/*int main(void)
{
	char *aux1;
	char *aux2;
	
	aux1 = ft_calloc(10, 10);
	aux2 = calloc(10, 10);

	printf("este es ft -%s-\n", aux1);
	printf("este es original -%s-\n", aux2);

	return (0);
}*/
