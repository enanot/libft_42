/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:14 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 17:29:01 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main (void)
{
	char *s = "";
	printf("este es ft %li \n", ft_strlen(s));
	printf("este es original %li \n", strlen(s));
	ft_strlen(s);
	return (0);
}*/
