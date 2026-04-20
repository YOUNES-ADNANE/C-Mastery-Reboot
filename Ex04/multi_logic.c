/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_logic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesadnane <younesadnane1337@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:12:33 by younesadnane      #+#    #+#             */
/*   Updated: 2026/04/20 13:55:43 by younesadnane     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) { write (1, &c, 1); }

void	ft_putnbr(int nb)
{
	if	( nb >= 10 )
	
	{
		ft_putnbr( nb / 10 );
		ft_putnbr( nb % 10 );
	}

	else
	{
		ft_putchar( nb + '0' );
	}
}	

int	main(void)
{
	char	buffer[2];
	int	num;
		
	write	(1, "Enter a digit (0-9): ", 21);
	read	(0, buffer, 2);

	num  =  buffer[0] - '0';

	write	(1, "double is: ", 11);
	ft_putnbr(num * 2);
	write	(1, "\n", 1);

	return 0;
}
