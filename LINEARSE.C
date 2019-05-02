void main()
{
	int p[10],i,item,n;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}

	printf("enter item\n");
	scanf("%d",&item);
	i=0;
	while(p[i]!=item && i<n)
	{
		i++;
	}
	if(p[i]==item)
	{
		printf("item found at %d\n",i+1);
	}
	else
	{
		printf("item not found\n");
	}
	getch();
}