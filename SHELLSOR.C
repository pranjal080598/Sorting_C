void main()
{
	int p[10],f,i,n,item,d,swap,temp;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	d=(n+1)/2;
	while(d>=1)
	{
		swap=0;
		if(d==1)
		{
			f=1;
		}
		for(i=0;i<n-d;i++)
		{
			if(p[i]>p[i+d])
			{
				temp=p[i];
				p[i]=p[i+d];
				p[i+d]=temp;
				swap++;
			}
		}
		if(swap>0)
		{
			swap=0;
		}
		else
		{
			d=(d+1)/2;
		}
		if(swap==0 && d==1 && f==1)
		{
			break;
		}
	}
	printf("sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}
	getch();
}

