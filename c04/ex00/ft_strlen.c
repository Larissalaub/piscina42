/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:08:53 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/30 19:17:46 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}
/*#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Amanda";
	char *p_str;

	p_str = str;

	int count = ft_strlen(p_str);

	printf("%d\n", count);
}*/
