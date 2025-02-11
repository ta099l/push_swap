/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:57:20 by tabuayya          #+#    #+#             */
/*   Updated: 2025/02/11 12:37:48 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_node(int value)
{
        t_stack *node = malloc(sizeof(t_stack));
        if (!node)
                return (NULL);
        node->data = value;
        node->next = NULL;
        return (node);
}

void stack_init(t_stack **a, int num)
{
        t_stack *node;
        t_stack *tmp;

        tmp = *a;
        node = new_node(num);
        if (!node)
                error_free(a, NULL);
        if (!*a)
                *a = node;
        else
        {
                while (tmp->next != NULL)
                        tmp = tmp->next;
                tmp->next = node;
        }
}

void print_list(t_stack *node)
{
        while (node)
        {
                ft_printf("node data: %d\n", node->data);
                node = node->next;
        }
}

int main(int argc, char **argv)
{
        t_stack *a;
        t_stack *b;
        int num;
        int i;

        i = 1;
        b = NULL;
        a = NULL;
        if (argc < 2)
                ft_exit(&a, &b, 1);
        while (argv[i])
        {
                check_elements(argv[i], &a);
                num = ft_atol(argv[i], &a, &b);
                if (check_duplicates(a, num))
                        stack_init(&a, num);
                else
                        error_free(&a, &b);
                i++;
        }
        if (is_sorted(a))
                ft_exit(&a, &b, 0);
        sort_list(&a, &b, argc);
        //print_list(a);
        //ft_exit(&a, &b, 0);
        return 0;
}