/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:55:45 by lgomes-l          #+#    #+#             */
/*   Updated: 2024/07/30 12:11:48 by lgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()
{
    char dest[50] = "Olá, ";
    char src[] = "mundo!";

    // Usa a função ft_strcat para concatenar src em dest
    ft_strcat(dest, src);

    // Imprime o resultado
    printf("Resultado da concatenação: %s\n", dest);

    return 0;
}*/
