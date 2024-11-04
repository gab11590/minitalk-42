/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabiven <gabiven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 23:05:30 by gabiven           #+#    #+#             */
/*   Updated: 2023/11/30 18:56:34 by gabiven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	nb;
	int		sign;

	nb = n;
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	length = get_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (nb < 0)
		nb = -nb;
	while (length--)
	{
		str[length] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
