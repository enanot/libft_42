/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:09:05 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 12:47:40 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	j;
	int		rest;
	char	*auxs1;
	char	*auxs2;

	auxs1 = (char *) s1;
	auxs2 = (char *) s2;
	j = 0;
	rest = 0;
	while ((j < n) && (!rest))
	{
		rest = auxs1[j] - auxs2[j];
		j++;
	}
	if ((j < n) && (!rest))
	{
		rest = auxs1[j] - auxs2[j];
	}
	return (rest);
}
/*int main (void)
{
	char s1[] = "hola mundo 4";
	char s2[] = "hola mundo 3";

	printf("este es el ft -%d-\n",ft_memcmp(s1,s2,12));
	printf("este es original -%d-\n", memcmp(s1,s2,12));
	return (0);

}*/
