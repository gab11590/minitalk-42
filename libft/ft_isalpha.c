/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabiven <gabiven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 23:06:18 by gabiven           #+#    #+#             */
/*   Updated: 2024/01/23 19:32:10 by gabiven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main() {
    char test_chars[] = {'A', 'z', '5', '@', 'b', 'G', '0', '%'};
    int i;

    for (i = 0; i < sizeof(test_chars) / sizeof(char); i++) {
        if (isalpha(test_chars[i]))
            printf("'%c' est une lettre alphabétique.\n", test_chars[i]);
        else
            printf("'%c' n'est pas une lettre alphabétique.\n", test_chars[i]);
    }

    return 0;
}
*/