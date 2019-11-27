int			ft_atoi(const char *str)
{
	int negative;
	int result;
	int i;

	i = 0;
	negative = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
	|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += ((int)str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-result);
	else
		return (result);
}
