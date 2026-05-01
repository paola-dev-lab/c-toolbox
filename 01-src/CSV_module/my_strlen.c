int	mystrlen(char	*str)
{
	int	i;

	if (str == NULL)
		return(0);

	i = 0;
	while (str[i])
		i++;
	return (i);
}
