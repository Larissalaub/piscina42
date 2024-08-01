/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:23:16 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/21 11:56:07 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}
/*int	main(void)
{
	int 	a;
	int 	b;

	a = 9;
	b = 5;

	printf("Antes da função:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois da função:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	 return 0;
}*/
