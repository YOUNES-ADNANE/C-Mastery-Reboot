/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesadnane <younesadnane1337@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:49:54 by younesadnane      #+#    #+#             */
/*   Updated: 2026/04/29 19:04:26 by younesadnane     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[100];
	int		i;

	write(1, "Enter a string: ", 16);
	scanf("%s", str);

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	write(1, "Result: ", 8);
	write(1, str, i);
	write(1, "\n", 1);

	return (0);
}
