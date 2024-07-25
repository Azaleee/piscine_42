unsigned char	reverse_bit(unsigned char octet)
{
	unsigned char	temp;
	int				i;

	i = 0;
	temp = 0;
	while (i < 8)
	{
		temp <<= 1;
		if (octet & 1)
			temp |= 1;
		octet >>= 1;
	}
}

void	print_bits(unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (octet & 1 << i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
