/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidakaseikana <hidakaseikana@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 01:07:32 by hidakaseika       #+#    #+#             */
/*   Updated: 2023/08/16 08:56:29 by hidakaseika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n) {
    if (n < 0) {
        write(1, "N\n", 2);
    } else {
        write(1, "P\n", 2);
    }
}

// int main(void){
//     ft_is_negative();
//     return 0;
// }