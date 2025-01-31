/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:23 by rkerobya          #+#    #+#             */
/*   Updated: 2025/01/25 18:19:58 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*c;

	i = 0;
	c = malloc(size * count);
	if (!c)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(c, count * size);
	}
	return (c);
}
