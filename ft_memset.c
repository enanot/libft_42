/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:16:48 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/14 13:57:36 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
	{
		*p++ = (unsigned char) c;
	}
	return (b);
}
/*int main (void)
{
	char b[5];
	printf("esta es el ft %s\n", ft_memset(b, 5,5));
	printf("esste es el original %s \n", memset(b, 5,5));
	return (0);

}*/
