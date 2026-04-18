/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesadnane <younesadnane1337@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 13:23:10 by younesadnane      #+#    #+#             */
/*   Updated: 2026/04/18 13:49:29 by younesadnane     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_putchar (nb + '0');
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	sum;
	int	prod;

	write	(1, "Enter you'r first number: \n", 27);
	scanf	("%d", &a);
	
	write	(1, "Enter you'r second number: \n", 28);
	scanf	("%d", &b);

	sum = a + b;
	prod = a * b;

	write	(1, "Sum is: ", 8);
	ft_putnbr (sum);
		
	write	(1, "\n", 1);

	write	(1, "Product is: ", 12);
	ft_putnbr (prod);


	return 0;
}
