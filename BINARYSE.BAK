void main()
{
	int p[10],i,item,n,end,beg,mid,j,temp;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	/*for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}  */
	printf("enter item\n");
	scanf("%d",&item);
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(item!=p[mid] && beg<=end)
	{
		if(item>p[mid])
		{
			beg=mid+1;

		}
		if(item<p[mid])
		{
			end=mid-1;
		}
		mid=(beg+end)/2;
	}
	if(p[mid]==item)
	{
		printf("item found at %d",mid+1);
	}
	if(p[mid]!=item)
	{
		printf("item not found\n");
	}
	getch();

}