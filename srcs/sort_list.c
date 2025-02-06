/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:39:37 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/06 15:10:09 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_two(t_stack **stack)
{
        t_stack *tmp;

        tmp = *stack;
        if(tmp->data > tmp->next->data)
                swap_a(stack);
}
void    sort_three(t_stack **stack)
{
        t_stack *first;
        t_stack *second;
        t_stack *third;
        
        first = *stack;
        second = first->next;
        third = second->next;
        if (first->data > second->data && first->data > third->data)
                rotate_a(stack);
        if (third->data < first->data && third->data < second->data)
                swap_a(stack);
        if ((*stack)->data > (*stack)->next->data)
                swap_a(stack);
}

void sort_four(t_stack **a, t_stack **b)
{
        push_min(a, b);
        sort_three(a);
        push_a(a, b);
}

void    sort_five(t_stack **a, t_stack **b)
{
        push_min(a, b);
        sort_four(a, b);
        push_a(a, b);
}


void    sort_list(t_stack **a, t_stack **b, int argc)
{
        if (argc == 3)
               sort_two(a);
        else if (argc == 4)
                sort_three(a);
        else if (argc == 5)
