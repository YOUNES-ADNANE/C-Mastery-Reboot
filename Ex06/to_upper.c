/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CNOS <younesadnane1337@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:29:28 by CNOS              #+#    #+#             */
/*   Updated: 2026/04/23 22:39:32 by CNOS             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	letter;

	write(1, "Enter a lowercase letter: ", 26);
	read(0, &letter, 1);

	if (letter >= 'a' && letter <= 'z')
	{
		letter = letter - 32;
	}

	write(1, "Result: ", 8);

	ft_putchar(letter);

	write(1, "\n", 1);

	return (0);
}

