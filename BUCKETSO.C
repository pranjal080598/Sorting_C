void main()
{
	int n,i,a[10],ch=0,j=0,temp,r,b[10],k;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	while(ch!=3)
	{
		j=0;
		k=0;
		while(k!=10)
		{
			for(i=0;i<n;i++)
			{
				if(ch==0)
				{
					r=(a[i]%10);
				}
				else if(ch==1)
				{
					r=(a[i]/10)%10;
				}
				else if(ch==2)
				{
					r=(a[i]/100);
				}
				if(r==k)
				{
					b[j]=a[i];
					j++;
				}
			}
			k++;
		}
		ch++;
	}
	printf("new array\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",b[i]);
	}
	getch();
}
