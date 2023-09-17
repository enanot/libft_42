/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:07:28 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/13 12:25:23 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
int	ft_isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main (void){
	
	char c;
	
	c = 'j';
	printf("este es el ft %d\n", ft_isalpha(c));
	printf("este el original %d\n", isalpha(c));

	return (0);


}*/
