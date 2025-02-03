/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:47:06 by tabuayya          #+#    #+#             */
/*   Updated: 2025/02/03 11:55:30 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_lib/includes/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
typedef struct	s_stack
{
    int	data;
    int	index;
    struct t_stack *next;    
}	t_stack;

#endif