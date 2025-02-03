/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:57:20 by tabuayya          #+#    #+#             */
/*   Updated: 2025/02/03 14:36:46 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    check_elements(char *argv)
{
        if (*argv  == '-' || *argv == '+')
                *argv++;
        while(*argv)
        {
                if ((*argv >= '9' && *argv <= '0'))
                        exit(1); //function
                argv++;
        }
}
int    check_duplicates(t_stack *a, head)
{
        while(a)
        {
                if (a->data == num)
                        exit(1); //function
                a = a->next;
        }
        return (1);
}
t_stack *new_node(int   value)
{
        t_stack *node = malloc(sizeof(t_stack));
        if (!node)
                exit(1); //function
        node->data = value;
        node->next = NULL;
        return (node);
}
int     main(int argc, char **argv)
{
        t_stack *a;
        t_stack *b;
        int     num;
        int     i;

        i = 1;
        b = NULL;
        a = NULL;
        if (argc < 2 )
                ft_printf("Too few arguments");
        while(argv[i])
        {
                num = ft_atoi(argv[i]);
                if (check_duplicates(a, ft_atoi(argv[1])))
                {
                        stack_init(&a);
                }
                i++;
        }
        check_elements(argv[1]);
        
        return (0);
}