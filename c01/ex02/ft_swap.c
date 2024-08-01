/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:36:43 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/21 12:00:23 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	inter;

	inter = *a;
	*a = *b;
	*b = inter;
}
/*int	main(void)
{
	int	x;
	int 	y;

	x = 15;
	y = 30;
	
	printf("%d\n", y);
	printf("%d\n", x);
	printf("DEPOIS\n");
	ft_swap(&x, &y);
	printf("%d\n", y);
	printf("%d\n", x);
	return (0);
}*/
