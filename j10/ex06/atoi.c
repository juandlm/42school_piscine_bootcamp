/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   atoi.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 23:31:35 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 23:33:34 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

long long	get_length(char *str)
{
	long long i;

	i = 0;
	while (str[i] != '\0'
			&& ((str[i] <= '9' && str[i] >= '0') || (str[0] == '-' && i == 0)))
	{
		i++;
	}
	return (i);
}

long long	atoipower(long long a)
{
	long long result;
	long long count;

	result = 1;
	count = 0;
	while (count < a)
	{
		result *= 10;
		count++;
	}
	return (result);
}

long long	atoi(char *str)
{
	long long	result;
	long long	count;
	long long	i;

	count = get_length(str);
	result = 0;
	i = (str[0] == '-') ? 1 : 0;
	while (i < count)
	{
		result += (str[i] - 48) * atoipower(count - i - 1);
		i++;
	}
	if (str[0] == '-')
	{
		result *= -1;
	}
	return (result);
}
