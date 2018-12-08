/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <lwyl-the@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:02:03 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/28 18:51:57 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	if (s1 && s2)
		while (*s1 && (*s1 == *s2) && --n)
		{
			s1++;
			s2++;
		}
	if ((*s1 - *s2) == 0)
		return (1);
	else
		return (0);
}
