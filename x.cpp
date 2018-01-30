 /*
  1
 3 2
 4 5 6
 10 9 8 7
 */

#include<stdio.h>
int main()
{
	int i,j,n,s=0,m;
	n=5;
	for(i=1;i<n;i++)
	{	if(i%2==0)
		s=s+i;
		m=s;
		for(j=1;j<=i;j++)
		{	
			if(i%2==0)
			{
				printf(" %d",m--);
			}
			else
			printf(" %d",++s);
		}
		printf("\n");
	}
return 0;	
}
