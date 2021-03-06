/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_nb_char.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 10:23:16 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:35:12 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		ft_nb_char(char *buf)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (buf[i] != '\n')
		i++;
	i++;
	while (buf[i] != '\n')
	{
		size++;
		i++;
	}
	return (size);
}
