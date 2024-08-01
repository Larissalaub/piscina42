/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:19:53 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/28 13:20:10 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*int main () {
        char string[] = "Ola Mai";
        char string1[] = "\nOla Mai";
        char string2[] = "";
        printf("%d\n", ft_str_is_printable(string));
        printf("%d\n", ft_str_is_printable(string1));
        printf("%d", ft_str_is_printable(string2));
      return (0);
}*/
