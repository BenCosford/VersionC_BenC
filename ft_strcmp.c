int	ft_strcmp(char *s1, char *s2)

{
	int	i;
	int	diff;

	i = 0;
	diff = (s1[i] - s2[i]);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (diff < 0)
		{
			return (diff);
		}
		if (diff > 0)
		{
			return (diff);
		}
		i++;
	}
	return (0);
}