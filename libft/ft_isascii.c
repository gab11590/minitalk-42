/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabiven <gabiven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 23:06:15 by gabiven           #+#    #+#             */
/*   Updated: 2024/01/23 19:32:19 by gabiven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main ()
{
    int i = 0;
    
    char test_chars [] = {'A', 'z', '5', '@', 'b', 'G', '0', '%'};
    while (i != 0)
    
    if (ft_isascii(test_chars[i]))
    {
        printf("'%c' est un caractère ASCII.\n", test_chars[i]);
    }
    else 
    {
        printf ("'%c' n'est pas un caractère ASCII.\n", test_chars[i]);
    }
    i++;
}
*/