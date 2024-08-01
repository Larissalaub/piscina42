/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:19:30 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/30 15:48:57 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest2;

	i = 0;
	dest2 = 0;
	while (dest[dest2] != '\0')
	{
		dest2++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[dest2 + i] = src[i];
		i++;
	}
	dest[dest2 + i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char str1[] = "Marcus";
	char str2[] = "Marcudos";

	printf("%s", ft_strncat(str1, str2, 4));
	return (0);
}*/
