char* FuncStr(const char* p1, const char* p2, char* p3)
{
	int m = 0;
	for (int i = 0; p1[i] != 0; i++)
	{
		for (int j = 0; p2[j] != 0; j++)
		{
			if (p1[i] == p2[j])
			{
				p3[m++] = p1[i];
			}
		}
	}
	p3[m] = '\0';
	return p3;
}