/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user_ayoub <user_ayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 02:47:17 by user_ayoub        #+#    #+#             */
/*   Updated: 2025/05/24 03:16:56 by user_ayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>

void	ft_is_negative(int number)
{
	if (number < 0)
	{
		write(1, "N\n", 2);
	}
	else
	{
		write(1, "P\n", 2);
	}
	write(1, "\n", 1);
}
