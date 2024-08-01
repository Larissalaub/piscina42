/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paazeved <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:14:33 by paazeved          #+#    #+#             */
/*   Updated: 2024/07/14 13:20:17 by paazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char letter);

void	print_char(int x, int y, int columns, int rows)
{
	if (y == 0)
	{
		if (x == 0)
			ft_putchar('/');
		else if (x == columns - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (y == rows - 1)
	{
		if (x == 0)
			ft_putchar('\\');
		else if (x == columns - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (x == 0 || x == columns - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	print_row(int y, int columns, int rows)
{
	int	x;

	x = 0;
	while (x < columns)
	{
		print_char(x, y, columns, rows);
		x++;
	}
}

void	print_columns(int rows, int columns)
{
	int	y;

	y = 0;
	while (y < rows)
	{
		print_row(y, columns, rows);
		ft_putchar('\n');
		y++;
	}
}

void	rush(int x, int y)
{
	print_columns(y, x);
}
