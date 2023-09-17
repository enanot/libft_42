/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:25:39 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/13 12:37:09 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/

int	ft_isdigit(int c)
{
	if (c > '0' && c < '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main (void)
{
	char c;
	c = '5';

	printf("este es el ft %d \n", ft_isdigit(c));
	printf("este el original %d \n", isdigit(c));


	return (0);

}
*/
