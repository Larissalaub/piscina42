/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:05:17 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/29 15:54:46 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char str1[] = "123456";
	char str2 [] = "123 456";
	char str3 [] = " ";

	printf("Str1 é? %d\n", ft_str_is_numeric(str1));
	printf("Str2 é? %d\n", ft_str_is_numeric(str2));
        printf("Str3 é? %d\n", ft_str_is_numeric(str3));

}*/
