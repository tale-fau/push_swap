void	rra(char *a)
{
	int	i;
	int	tmp;
	int	max;

	i = 1;
	max = ft_strlen(a) - 1;
	tmp = a[max];
	while (i < max)
	{
		a[i + 1] = a[i];	
	}
}
