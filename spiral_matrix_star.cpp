
#include<stdio.h>
int main()
{
	int ar[100][100]={0};
	int t,b,l,r,i,j;
	int n,c=1;
	printf("enter size");
	scanf("%d",&n);
	t=0;
	l=0;
	b=n-1;
	r=n-1;
		for(i=l;i<=r;i++)
		{
		 ar[t][i]=c;
		 
		}
		t++;
		t++;
	while(t<=b||l<=r)
	{
	
		for(i=t-1;i<=b;i++)
		{
			ar[i][r]=c;
		
		}
			r--;
			r--;
		for(i=r+1;i>=l;i--)
		{
			ar[b][i]=c;
			
		}
		b--;b--;
		for(i=b+1;i>=t;i--)
		{
			ar[i][l]=c;
		}
		l++;
		for(i=l++;i<=r;i++)
		{
		 ar[t][i]=c;
		 
		}
		t++;
		t++;		

	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		
		if(ar[i][j]>0)
		{
			printf("* ");		
		}
		else
		printf("  ");
	}printf("\n");
	}
	return 0;
}
