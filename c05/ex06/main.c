/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 13:15:18 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 16:44:25 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= (nb / div))
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int		main(void)
{
	int nb;
	int res;

	nb = 9;
	res = ft_is_prime(nb);
	printf("%d\n", res);
}
