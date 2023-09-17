/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:47:19 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/14 14:01:41 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	aux;
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *) s;
	aux = (char) c;
	while (*tmp != '\0')
	{
		tmp++;
		i++;
	}
	while (i >= 0)
	{
		if (*tmp == aux)
		{
			return (tmp);
		}
		tmp--;
		i--;
	}
	return (NULL);
}
/*int main (void)
{
	char s[] = "hola mundo";

	printf("este es ft -%s-\n", ft_strrchr(s, 'o'));
	printf("estes es original -%s-\n", strrchr(s, 'o'));
	return(0);
}*/
