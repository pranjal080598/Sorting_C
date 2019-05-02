void main()
{
	char s[10],str[5];
	int i,j,k,temp,n,len,u=0,l=0;
	clrscr();
	printf("enter string\n");
	gets(s);
	len=strlen(s);
	s[len]=' ';
	s[len+1]='+';
	i=0;
	while(s[i]!='+')
	{
		temp=0;
		while(s[i]!=' ')
		{
			temp++;
			if(s[i]>='n' && s[i]<='z' || s[i]>='a' && s[i]<='z')
			{
				u++;
			}
			else if(s[i]>='0'&& s[i]<='9')
			{
				l++;
			}
			i++;
		}
		if(temp==u)
		{
			printf("token is var\n");
		}
		else if(temp==l)
		{
			printf("token is const\n");
		}
		else
		{
			printf("invalid token\n");
		}
		if(s[i]==' ')
			i++;
			u=0;
			l=0;
			temp=0;
		}
		getch();
	}

