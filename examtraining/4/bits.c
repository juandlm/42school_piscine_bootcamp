/* ************************************************************************* */
/*                                                          LE - /            */
/*                                                              /             */
/*   bits.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 16:44:50 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 16:54:11 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	int i;
	unsigned char last;
	unsigned char reversed;
	
	i = 0;
	while (i < 7)
	{
		last = octet & 1;
		octet >>= 1;
		reversed += last;
		reversed <<= 1;
		i++;
	}
	return (reversed);
}

void	print_bits(unsigned char octet)
{
	int i;
	
	i = 128;
	while (i > 0)
	{
		if (i & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

unsigned char swap bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}
