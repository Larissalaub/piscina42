/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:21:43 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/27 09:46:18 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	char	a;

	if (*str == '\0')
		return (1);
	while (*str)
	{
		a = *str;
		if (!((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main(){
	

	char str1[] = "nalgali11";
	char str2[] = "MAGIC";
	int resultado1 =	ft_str_is_alpha(str1);
	int resultado2 = 	ft_str_is_alpha(str2);
	printf("%s- %d\n", str1, resultado1);
	printf("%s - %d\n", str2, resultado2);
}*/
