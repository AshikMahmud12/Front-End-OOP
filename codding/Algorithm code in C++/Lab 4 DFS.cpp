void DFS()
{
	int i,cnt;
	t=0;
	for(i=0;i<=v;i++)
	{
		colr[i]=0;
		st[i]=-1;
		f[i]=-1;
	}
	cnt=0;
	for(i=1;i<=v;i++)
	{
		if(colr[i] == 0)
		{
			cnt++;
			DFS_V(i);
		}
	}

	print_f();
}

void DFS_V(int s)
{
	int i,j;
	st[s]=t++;
	colr[s]=1;

	for(i=1;i<=v;i++)
	{
		if(matrix[s][i] == 1 && colr[i] == 0)
		{
			DFS_V(i);
		}
	}
	f[s]=t++;
	colr[s]=2;
}
