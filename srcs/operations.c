/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:47:36 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/04 21:37:36 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_stack **a, t_stack **b)
{
        t_stack *tmp;

        if (!b)
                return;
        tmp = *b;
        *b = (*b)->next;
        tmp->next = *a;
        *a = tmp;
}
void swap(t_stack **stack)
{
        if(!stack || !(*stack)->next)
                return;
        t_stack *first = *stack;
        t_stack *second = first->next;
        
        first->next = second->next;
        second->next = first;
        *stack = second;
}
void rotate(t_stack **stack)
{
        if (!*stack || !(*stack)->next)
                return;

        t_stack *first = *stack;
        t_stack *temp = *stack;

        while (temp->next)
                temp = temp->next;
        *stack = first->next;
        first->next = NULL;
        temp->next = first;
}
