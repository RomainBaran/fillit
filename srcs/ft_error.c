/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 15:47:13 by rbaran            #+#    #+#             */
/*   Updated: 2016/02/26 18:33:48 by rbaran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

void	ft_error(int flag)
{
	if (flag == USAGE)
		ft_putstr("./fillit source_file\n");
	else
		ft_putstr("error\n");
	exit(1);
}