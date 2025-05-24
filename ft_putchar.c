/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user_ayoub <user_ayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 02:07:26 by user_ayoub        #+#    #+#             */
/*   Updated: 2025/05/24 03:17:47 by user_ayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	ft_putchar(char character)
{
	write(1, &character, 1);
	write(1, "\n", 1);
}
