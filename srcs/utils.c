/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:19:04 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/07 12:43:50 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_stack *a)
{
        int min;
        t_stack *current;

        current = a;
        min = current->data;
        while (current)
        {
                if (current->data < min)
                        min = current->data;
                current = current->next;
        }
        return (min);
}

void push_min(t_stack **a, t_stack **b)
{
        int min;

        min = find_min(*a);
        while ((*a)->data != min)
                reverse_rotate_a(a);
        push_b(b, a);
}

void ft_free_stack(t_stack **stack)
{
        t_stack *temp;

        while (*stack)
        {
                temp = (*stack)->next;
                free(*stack);
                *stack = temp;
        }
}

void ft_exit(t_stack **a, t_stack **b)
{
        ft_free_stack(a);
        ft_free_stack(b);
        exit(0);
}

void switch_values(t_stack *a)
{
        while (a)
        {
                a->data = a->index;
                a = a->next;
        }
}
