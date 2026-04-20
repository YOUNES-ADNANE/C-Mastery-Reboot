/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_age.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesadnane <younesadnane1337@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:18:36 by younesadnane      #+#    #+#             */
/*   Updated: 2026/04/16 19:46:17 by younesadnane     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int age = 17;

	write(1, "My age is: ",11);


	ft_putchar((age / 10) + '0');
	ft_putchar('\n');

	return (0);
}
