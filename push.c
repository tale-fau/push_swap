void	pa(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i])
		i++:
	while (i > 0)
	{
		a[i] = a[i - 1]
		i--;
	}
	a[0] = b[0];
}

void	pb(char *a, char *b)
{
	int	i;

	i = 0;
	while (b[i])
		i++;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = a[0];
}

