/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:20:43 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/14 14:38:30 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	aux;
	size_t			i;
	char			*s1;

	s1 = (char *) s;
	aux = (unsigned char) c;
	i = 0;
	while (*s1 != '\0' && i < n)
	{
		if (*s1 == aux)
		{
			return (s1);
		}
		s1++;
		i++;
	}
	return (NULL);
}
/*int main (void)
{
	char s[]= "hola mundo";
	
	printf("este es ft -%s-\n", ft_memchr(s,'m',5));

	printf("este es original -%s-\n",memchr(s, 'm',5));
	return (0);

}*/
