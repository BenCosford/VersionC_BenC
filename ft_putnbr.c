/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:20:08 by bcosford          #+#    #+#             */
/*   Updated: 2021/12/13 18:36:10 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)

{
	char	car;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{	
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{	
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	if (nb < 10)
	{
		car = (nb + '0');
		write(1, &car, 1);
	}
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(void)

{
	char	car;
	int	nb = -2147483648;
	
	ft_putnbr(nb);
	printf("%d", car);
	return (0);
}*/
