/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:10:40 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/05 12:24:05 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a(t_stack **a)
{
        ft_printf("sa\n");
        swap(a);
}

void push_a(t_stack **a, t_stack **b)
//takes from b and pushes into a
{
        ft_printf("pa\n");
        push(a,b);
}
void rotate_a(t_stack **a)
{
        ft_printf("ra\n");
        rotate(a);
}
void reverse_rotate_a(t_stack **a)
{
        ft_printf("rra\n");
        reverse_rotate(a);
}
void swap_ab(t_stack **a, t_stack **b)
{
        ft_printf("ss\n");
        swap(a);
        swap(b);
}