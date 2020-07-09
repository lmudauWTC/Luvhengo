
/* ************************************************************************** */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmudau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:16:27 by lmudau            #+#    #+#             */
/*   Updated: 2020/07/09 16:16:27 by lmudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char start;
	char end ;

	start = 'a';
	end = 'z'; 
	while (start <= end)
	{
		ft_putchar(start);
		start++;
	}

}

void ft_putchar(char c)
{
	write (1, &c, 1); 
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}

	

