/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takes_place.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 19:56:33 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 19:56:36 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour >= 1 && hour < 11)
			printf("%d.00 A.M. AND %d A.M.\n", hour, hour + 1);
		else if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		else if (hour == 12)
			printf("12.00 P.M. AND 1.00 P.M.\n");
		else if (hour >= 13 && hour < 23)
			printf("%d.00 P.M. AND %d P.M.\n", hour - 12, hour - 11);
		else if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		else if (hour == 0)
			printf("12.00 A.M. AND 1.00 A.M.\n");
	}
	else
		printf("ENTER A VALID TIME YOU DUMBASS");
}
