/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user_ayoub <user_ayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 02:53:08 by user_ayoub        #+#    #+#             */
/*   Updated: 2025/05/24 03:14:37 by user_ayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	main(void)
{
	char	*str;

	str = "ayoub";
	ft_print_even();
	ft_putchar('a');
	ft_putstr(str);
	ft_print_reverse_alphabet();
	ft_is_negative(2);
	return (0);
}
