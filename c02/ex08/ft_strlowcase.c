/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:22:15 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/30 18:34:31 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr += 32;
		ptr++;
	}
	return (str);
}
/*int main (void){
	char string[] = "Oi tudo bem?";
	ft_strupcase(string);
	printf("%s", string);
	return 0;
}*/
