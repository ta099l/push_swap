/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:47:36 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/05 12:26:08 by tasnimsamer      ###   ########.fr       */
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
void    reverse_rotate(t_stack  **stack)
{
        t_stack *tmp;
        t_stack *n_last;

        n_last = NULL;
        tmp = *stack;
        
        if(!stack)
                return;
        while(tmp->next != NULL)
        {
                n_last = tmp;
                tmp = tmp->next;
        }
        tmp->next = *stack;
        n_last->next = NULL;
        *stack = tmp;
}