/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_even.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user_ayoub <user_ayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 02:03:30 by user_ayoub        #+#    #+#             */
/*   Updated: 2025/05/24 03:25:15 by user_ayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>

void	ft_print_even(void)
{
	int	number;
	int	c;

	number = 0;
	while (number < 10)
	{
		if (number % 2 == 0)
		{
			c = number + '0';
			write(1, &c, 1);
		}
		number++;
	}
	write(1, "\n", 1);
}
