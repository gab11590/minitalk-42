/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabiven <gabiven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:43:10 by gabiven           #+#    #+#             */
/*   Updated: 2024/11/04 20:38:37 by gabiven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf/ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

// server
void	afficher_pid(void);
void	gerer_signal(int sig);

// client
void	send_bit(int pid, char bit);
void	send_char(int pid, char c);
void	send_message(int pid, const char *message);
