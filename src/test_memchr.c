/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapena-z <mapena-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:44:41 by mapena-z          #+#    #+#             */
/*   Updated: 2026/05/24 18:49:30 by mapena-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../libft.h"
#include <string.h>

int g_num_subtests = 10; 

int run_subtest(int index)
{
    char buffer[] = "At\042School"; 
    size_t zero = 0;
    size_t giant = 2147483647;

    if (index == 1)
        return (ft_memchr(buffer, 'A', 9) == memchr(buffer, 'A', 9));
    if (index == 2)
        return (ft_memchr(buffer, 'S', 9) == memchr(buffer, 'S', 9));
    if (index == 3)
        return (ft_memchr(buffer, '\0', 9) == memchr(buffer, '\0', 9));
    if (index == 4)
        return (ft_memchr(buffer, 'l', 5) == NULL);
    if (index == 5)
        return (ft_memchr(buffer, 'A', zero) == NULL);
    if (index == 6)
        return (ft_memchr(buffer, 256 + 't', 9) == memchr(buffer, 256 + 't', 9));
    if (index == 7)
    {
        char sneaky_box[] = "abc\xffxyz";
        return (ft_memchr(sneaky_box, 255, 7) == memchr(sneaky_box, 255, 7));
    }
    if (index == 8)
        return (ft_memchr(buffer, 'z', 9) == NULL);
    if (index == 9)
    {
        char double_str[] = "ababab";
        return (ft_memchr(double_str, 'b', 6) == (void *)&double_str[1]);
    }
    if (index == 10)
        return (ft_memchr(buffer, 't', giant) == memchr(buffer, 't', giant));

    return (0);
}