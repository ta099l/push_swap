/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:57:55 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/11 13:29:03 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free_stack(t_stack **stack)
{
        t_stack *temp;

        if (stack == NULL || *stack == NULL)
                return;
        while (1)
        {
                ft_printf("hi\n");
                temp = *stack;
                *stack = (*stack)->next;
                free(temp);
                if (!*stack)
                        break;
        }
}

// temp2 = *stack;
// while (temp2)
// {
//         temp = temp2;
//         temp2 = temp->next;
//         free(temp);
// }
// ft_printf("stack freed\n");

// {
//         t_stack *temp;

//         if (stack == NULL || *stack == NULL)
//                 return;
//         temp = *stack;
//         while (temp)
//         {
//                 ft_printf("stack freed\n");
//                 free(temp);
//         }
// }

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