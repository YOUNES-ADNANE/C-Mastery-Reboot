/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even_odd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesadnane <younesadnane1337@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:20:43 by younesadnane      #+#    #+#             */
/*   Updated: 2026/04/21 22:30:51 by younesadnane     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int size) { write (1, str, size); }

int	main(void)
{
	char	c;
	int	num;

	ft_putstr("Enter a number: ", 16);

	read	(0, &c, 1);
	num  =  c - '0';

	if	(num % 2 == 0)

		ft_putstr("It is Even\n", 11);
	
	else
		ft_putstr("It is Odd\n", 10);

	return	0;
}
