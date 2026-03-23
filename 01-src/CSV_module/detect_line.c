int	detect_line(char *buffer)
{
	int	i;

	i = 0;
	while(buffer[i] != '\0`)
	{
		if(buffer[i] == '\n')
			return (i);
	i++;
	}
		return (-1);
}
