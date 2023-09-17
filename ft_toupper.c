/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:53:24 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/13 16:07:38 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int	ft_toupper(int c)
{
	if (c > 'a' && c < 'z')
	{
		c = (unsigned char) c - 32;
	}
	return (c);
}

/*int main (void)
{
	printf("este es el ft %c\n", ft_toupper('X'));
	printf("este es el original %c\n", toupper('X'));
	return(0);
}*/
