/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:16:06 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/21 12:03:32 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	string;

	string = 0;
	while (str[string] != '\0')
	{
		string++;
	}
	return (string);
}
/*int	main(void)
{
	char str[] = "Larissinha";
	printf("comprimento: %d\n", ft_strlen(str));
	return (0);
}*/
