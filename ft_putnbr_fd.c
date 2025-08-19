/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:47:55 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/19 12:47:56 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	n_long = n;
	if (n_long < 0)
	{
		ft_putchar_fd('-', fd);
		n_long = -n_long;
	}
	if (n_long > 9)
		ft_putnbr_fd(n_long / 10, fd);
	ft_putchar_fd((int)(n_long % 10) + '0', fd);
}
