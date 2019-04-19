#include<stdio.h>
#include<conio.h>
int a[5],current=0,p=0,visted[5],g[5][5];

int bfs(int i)
{
	if(current>4)
	{
		return 0;
	}
	else{
	
int j,temp;
if(current==0)
{

a[current]=i;
visted[i]=1;
p=p+1;}
for(j=0;j<5;j++)
{
	if(!visted[j]&&g[i][j])
	{
		a[p]=j;
		p++;
		visted[j]=1;
	}
}
current++;
temp=a[current];
bfs(temp);
}
}
int main()
{
	int i,j,u;
	printf("enter the graph as adjacency matrix");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("enter 1 if there exists an edge between %d-%d",i,j);
			scanf("%d",&g[i][j]);
			
		}
	}
	for(i=0;i<5;i++)
	{
		visted[i]=0;
	}
	printf("enter the node that you wanted to strt traversing from");
	scanf("%d",&u);
	bfs(u);
	for(i=0;i<5;i++)
	{
		printf("\n");
		printf("%d-",a[i]);
		
	}
	return 0;
}

