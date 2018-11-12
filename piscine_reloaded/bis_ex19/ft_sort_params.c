/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:50:19 by vphongph          #+#    #+#             */
/*   Updated: 2018/11/12 19:37:28 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(char **av)
{
	int i;
	int j;

	i = 1;
	j = -1;
	while (av[i])
	{
		while (av[i][++j])
			ft_putchar(av[i][j]);
		ft_putchar('\n');
		i++;
		j = -1;
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*tmp;

	if (ac == 1)
		return (0);
	i = 2;
	while (av[i])
	{
		if (ft_strcmp(av[i - 1], av[i]) > 0 && i > 1)
		{
			tmp = av[i - 1];
			av[i - 1] = av[i];
			av[i] = tmp;
			i--;
		}
		else
			i++;
	}
	ft_print_params(av);
}
