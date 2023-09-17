/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:49:01 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 14:08:39 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*str;
	char	*to_find;
	size_t	x;

	x = 0;
	to_find = (char *) needle;
	str = (char *) haystack;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && x < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && x < len)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
		x++;
	}
	return (0);
}
/*int main (void)
{
	char hay[]= "hola mundo";
	char need[] ="l";

	printf("este es el ft -%s-\n", ft_strnstr(hay, need, 2));
	printf("este es el original -%s-\n",strnstr(hay, need,2));

	return(0);
}*/
