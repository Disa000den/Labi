bool DelSum(int n, int *kol, int *sum)
{
	for (int i = 1; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			*kol = *kol + 1;
			*sum = *sum + i;
		}
	}
	return true;
}