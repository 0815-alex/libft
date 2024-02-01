/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_dim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:39:11 by astein            #+#    #+#             */
/*   Updated: 2024/02/01 14:46:39 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_printf.h"

void	ft_matrix_dim(char **matrix, int *x, int *y)
{
	int	biggest_x;

	biggest_x = 0;
	*y = 0;
	while (matrix[*y])
	{
		*x = 0;
		while (matrix[*y][*x])
			(*x)++;
		if (*x > biggest_x)
			biggest_x = *x;
		(*y)++;
	}
	*x = biggest_x;
}
