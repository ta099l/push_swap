/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:19:04 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/11 02:58:25 by tasnimsamer      ###   ########.fr       */
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

void switch_values(t_stack *a)
{
        while (a)
        {
                a->data = a->index;
                a = a->next;
        }

}
// void    ft_atol_2(int   result)
// {
        
// }
int ft_atol(char *nptr, t_stack **a, t_stack **b)
{
        int i;
        long result;
        int sign;

        sign = 1;
        result = 0;
        i = 0;
        while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
                i++;
        if (nptr[i] == '-' || nptr[i] == '+')
        {
                if (nptr[i] == '-')
                        sign = -1;
                i++;
        }
        while (nptr[i] >= '0' && nptr[i] <= '9')
        {
                result = (result * 10) + (nptr[i] - 48);
                i++;
        }
        if (result > INT_MAX || result < INT_MIN)
                error_free(a, b);
        return (result * sign);
}