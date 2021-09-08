void	ra(char *a)
{
	int	tmp;
	int	i;
	int	max;

	i = 0;
	max = ft_strlen(a) - 1;
	tmp = a[0];	
	while (i <= max)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[max] = tmp;
}

void	rb(char *b)
{
	int	tmp;
	int	i;
	int	max;

	i = 0;
	max = ft_strlen(b) - 1;
	tmp = b[0];
	while (i <= max)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[max] = tmp;
}

void	rr(char *a, char *b)
{
	ra(a);
	rb(b);
}
