/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabuayya <tabuayya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:47:06 by tabuayya          #+#    #+#             */
/*   Updated: 2025/02/02 10:33:47 by tabuayya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_lib/includes/libft.h"
# include <limits.h>
# include <stdlib.h>
typedef struct	s_stack
{
    int	data;
    int	index;
    struct t_stack *next;    
}	t_stack;

#endif