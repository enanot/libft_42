/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:51:33 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/13 13:42:00 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>*/

int	ft_isascii(int c)
{
	if (c > 0 && c < 128)
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
	c = '0';

	printf("este es el ft %d \n", ft_isascii(c));
	printf("este es el original %d \n", isascii(c));
	return(0);
}*/
