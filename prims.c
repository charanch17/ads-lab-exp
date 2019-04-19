#include<stdio.h>
#include<conio.h>
int a[5][5],stack[5],vis[5],top=0,g[5][5],n=1;
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("enter the edge weight from%d%d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	prims(0);
	for(i=0;i<5;i++)
	{
		printf("%d",stack[i]);
	}
	return 0;
}
int prims(int v1)
{
	int min=999,j,p;
	vis[v1]=1;
	if(n==1)
	{
		stack[top]=v1;
	}
	if(n==5)
	{
		return 0;
	}
	else
	{
		for(j=0;j<5;j++)
		{
			if(vis[j]==0)
			{
				if(a[v1][j]!=999)
				{
					if(min>a[v1][j])
					{
						min=a[v1][j];
						p=j;
					}
				}
			}
		}
		if(min==999)
		{
			
			prims(stack[top-1]);
		}
		else
		{
			g[v1][p]=min;
			vis[p]=1;
			top=top+1;
			stack[top]=p;
			
			n=n+1;
			prims(p);
		}
	}
}

