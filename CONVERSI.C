void main()
{
	int n=0,i,j,d,mod,k,ch,y;
	int a[5];
	clrscr();
	do
	{
		printf("enter no.\n");
		scanf("%d",&n);
		printf("enter choice\n");
		scanf("%d",&ch);
		d=n;
		i=-1;
		switch(ch)
		{
			case 1:
			{
				while(d!=0)
				{
					mod=d%2;
					i++;
					a[i]=mod;
					d=d/2;
				}
				break;
			}
			case 2:
			{
				while(d!=0)
				{
					mod=d%8;
					i++;
					a[i]=mod;
					d=d/8;
				}
				break;
			}
			case 3:
			{
				while(d!=0)
				{
					mod=d%16;
					i++;
					a[i]=mod;
					d=d/16;
				}
				break;
			}
		}
		printf("final otp\n");
		for(j=i;j>=0;j--)
		{
			if(a[j]==10)
			{
				printf("A\t");
			}
			else if(a[j]==11)
			{
				printf("b\t");
			}
			else if(a[j]==12)
			{
				printf("c\t");
			}
			else if(a[j]==13)
			{
				printf("d\t");
			}
			else if(a[j]==14)
			{
				printf("e\t");
			}
			else if(a[j]==10)
			{
				printf("f\t");
			}
			else
			{
				printf("%d\t",a[j]);
			}
		}
		printf("\npress 1 to cont\n");
		scanf("%d",&y);
	}
	while(y==1);
	getch();
}

