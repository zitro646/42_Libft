/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelangelortizdelburgo <miguelangelor    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:39:31 by mortiz-d          #+#    #+#             */
/*   Updated: 2024/12/05 19:23:20 by miguelangel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	cont;
	int	size;

	if (s != 0)
	{
		cont = 0;
		size = ft_strlen(s);
		while (cont < size)
		{
			write (fd, &s[cont], 1);
			cont++;
		}
		write (fd, "\n", 1);
	}
}