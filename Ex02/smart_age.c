/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_age.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesadnane <younesadnane1337@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:06:39 by younesadnane      #+#    #+#             */
/*   Updated: 2026/04/17 17:14:26 by younesadnane     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int age;

	write (1, "Enter you'r age: \n", 18);
	scanf("%d", &age);

	if ( age >= 18)
	{
		write (1, "You'r an adult.\n", 17);
	}
	else
	{
		write (1, "You'r an minor :)\n", 18);
	}

	return 0;
}
