/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:08:04 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/13 16:10:50 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_tolower(int c)
{
	if (c > 'A' && c < 'Z')
	{
		c = (unsigned char) c + 32;
	}
	return (c);
}
/*
int main (void)
{
	printf("este es el ft %c\n", ft_tolower('X'));
	printf("este es el original %c\n", tolower('X'));
	return(0);
}*/
