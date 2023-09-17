/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:14:59 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 12:19:28 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*int main (void)
{
	char s[5];
	char s1[5];
	ft_bzero(s, 4);
	bzero(s1,4);
	printf("ft es -%s-\n", s);
	printf("orignal es -%s-\n", s1);
	return (0);
}*/
