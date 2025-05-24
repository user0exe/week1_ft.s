/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user_ayoub <user_ayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 02:38:06 by user_ayoub        #+#    #+#             */
/*   Updated: 2025/05/24 03:16:22 by user_ayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	character;

	character = 'z';
	while (character >= 'a')
	{
		write(1, &character, 1);
		character--;
	}
}
