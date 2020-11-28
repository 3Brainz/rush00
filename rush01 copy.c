/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:48:44 by ppunzo            #+#    #+#             */
/*   Updated: 2020/11/28 16:05:01 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_character(int a, int b, int c, int r)
{
	if ((r == 1 && c == 1) || ((r == b && c == a) && b > 1 && a > 1))
	{
		ft_putchar('/');
	}
	else if ((r == 1 && c == a) || (r == b && c == 1))
	{
		ft_putchar('\\');
	}
	else if (r > 1 && r < b && c > 1 && c < a)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush01(int a, int b)
{
	int c;
	int r;

	c = 1;
	r = 1;
	if (a > 0 && b > 0)
	{
		while (r <= b)
		{
			while (c <= a)
			{
				print_character(a, b, c, r);
				c++;
			}
			r++;
			ft_putchar('\n');
			c = 1;
		}
	}
}
