/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:39:37 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/06 11:31:44 by tasnimsamer      ###   ########.fr       */
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
                reverse_rotate_a(stack);
        if ((*stack)->data > (*stack)->next->data)
                swap_a(stack);
}
// void    sort_list(t_stack **a, t_stack **b, int argc)
// {
//          if (argc == 4)
//                sort_three(a);  
// 