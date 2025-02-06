/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:57:20 by tabuayya          #+#    #+#             */
/*   Updated: 2025/02/06 14:15:59 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void stack_init(t_stack **a, int num)
{
        t_stack *node;
        t_stack *tmp;

        tmp = *a;
        node = new_node(num);
        if(!*a)
                *a = node;
        else
        {
                while(tmp->next != NULL)
                        tmp = tmp->next;
                tmp->next = node;    
        }
}
t_stack *new_node(int value)
{
        t_stack *node = malloc(sizeof(t_stack));
        if (!node)
                return (NULL); // function
        node->data = value;
        node->next = NULL;
        return (node);
}
void    print_list(t_stack *node)
{
        while(node)
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
        //error_checking(argv[i]);
        if (argc < 2)
                ft_printf("Too few arguments\n");
        
        while (argv[i])
        {
                check_elements(argv[i]);
                num = ft_atoi(argv[i]);
                if (check_duplicates(a, num))
                        stack_init(&a, num);
                else
                        return (0); // function
                i++;
        }
        //sort_list(a, b, argc);
        //is_sorted(a);
        //sort_three(&a);
        //reverse_rotate_a(&a);
        //radix_sort(&a, &b);
        sort_five(&a,&b);
        // print_list(a);
        //print_list(b);
}