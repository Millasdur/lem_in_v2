/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uppercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlely <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 09:30:45 by hlely             #+#    #+#             */
/*   Updated: 2018/04/16 09:34:14 by hlely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_uppercase(char **str)
{
	int		i;

	i = 0;
	while ((*str)[i])
	{
		(*str)[i] = ft_toupper((*str)[i]);
		i++;
	}
}
