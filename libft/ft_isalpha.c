/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isaplha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:42:29 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/28 15:15:05 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	else
		return (0);
}
