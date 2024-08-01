/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:53:11 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/29 15:57:25 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/* int main(){
 *char str1[] = "212121";
  char str2[] = "123 142";
  char str3[] = "";

  	printf("str1 é numérico? %d\n", ft_str_is_numeric(str1)); // Esperado: 1   	 
	printf("str2 é numérico? %d\n", ft_str_is_numeric(str2)); // Esperado: 0   
        printf("str3 é numérico? %d\n", ft_str_is_numeric(str3)); // Esperado: 1 
 * }*/
