/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:57:55 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/11 02:22:28 by tasnimsamer      ###   ########.fr       */
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
        ft_printf("stack freed\n");
}

void ft_exit(t_stack **a, t_stack **b, int num)
{
        ft_free_stack(a);
        ft_free_stack(b);
        exit(num);
}

void error_free(t_stack **a, t_stack **b)
{
        ft_free_stack(a);
        ft_free_stack(b);
        write(2, "Error\n", 6);
        exit(1);
}