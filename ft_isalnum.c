/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:38:24 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/13 16:09:23 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
int	ft_isalnum(int c)
{
	if ((c > '0' && c < '9') || (c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*int main (void)
{
	char c;
	c  = '2';

	printf("este es el ft %d \n", ft_isalnum(c));
   	printf("este es el original %d \n", isalnum(c));

	return (0);
}*/
