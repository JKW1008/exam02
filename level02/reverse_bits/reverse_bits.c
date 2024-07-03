unsigned char reverse_bits(unsigned char octet)
{
	int s = 1;
	unsigned char a[8];

	a[0] = (s & octet) << 7;
	s *= 2;
	a[1] = (s & octet) << 5;
	s *= 2;
	a[2] = (s & octet) << 3;
	s *= 2;
	a[3] = (s & octet) << 1;
	s *= 2;
	a[4] = (s & octet) >> 1;
	s *= 2;
	a[5] = (s & octet) >> 3;
	s *= 2;
	a[6] = (s & octet) >> 5;
	s *= 2;
	a[7] = (s & octet) >> 7;
	return (a[0] | a[1] | a[2] | a[3] | a[4] | a[5] | a[6] | a[7]);
}
