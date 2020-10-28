void ft_memset(void *b, int c, size_t len)
{
	unsigned char *qwe;
	size_t i;

	qwe = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		qwe[i] = c;
		i++;
	}
	return (b);
}

