/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:13 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/14 02:41:14 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*v;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if ((unsigned long)(nmemb * size) != ((long)nmemb) * size)
		return (NULL);
	v = malloc(nmemb * size);
	return (v);
}
