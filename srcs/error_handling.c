/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:54:13 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/07 17:42:25 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *node)
{
        if (!node)
                ft_free_stack(&node);
        while (node->next)
        {
                if (node->data > node->next->data)
                {
                        ft_printf("not sorted\n");
                        return (0);
                }
                node = node->next;
        }
        ft_printf("sorted\n");
        return (1);
}
int check_elements(char *argv)
{
        if (*argv == '-' || *argv == '+')
                argv++;
        while (*argv)
        {
                if ((*argv > '9' || *argv < '0'))
                {
                        ft_printf("Invalid Argument\n");
                        return (0); // function
                }
                argv++;
        }
        return (1);
}
int check_duplicates(t_stack *a, int num)
{
        while (a)
        {
                if (a->data == num)
                {
                        ft_printf("Duplicate Error\n");
                        return (0); // function
                }
                a = a->next;
        }
        return (1);
}