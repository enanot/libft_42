/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:42:18 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/13 13:54:59 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
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
	
	c = 'h';
	printf("este es el ft %d\n", ft_isprint(c));
	printf("este es el original %d\n", isprint(c));
	return(0);

}*/
