/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:14:21 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/14 13:44:12 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	aux;
	char	*tmp;

	tmp = (char *) s;
	aux = (char) c;
	while (*tmp != '\0')
	{
		if (*tmp == aux)
		{
			return (tmp);
		}
		tmp++;
	}
	return (NULL);
}
/*int main (void)
{
	char s[] = "hola mundo";
	
	printf("este es ft -%s-\n", ft_strchr(s, 'j'));
	printf("estes es original -%s-\n", strchr(s, 'j'));
	return(0);
}*/
