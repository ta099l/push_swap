/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:57:55 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/07 17:18:00 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free_stack(t_stack **stack)
{
        t_stack *temp;

        if (stack == NULL || *stack == NULL)
                return;
        while (*stack)
        {
                temp = (*stack)->next;
                free(*stack);
                *stack = temp;
        }
        *stack = NULL;
}

void ft_exit(t_stack **a, t_stack **b)
{
        ft_free_stack(a);
        ft_free_stack(b);
        exit(0);
}