#include<stdio.h>
#include<conio.h>
int a[10][10];
int main()
{
	int i,p=1,ch;
while(p)
{
	printf("enter the option");
	printf("1:create,2:ins vertex,3:del vertex,4:find vertex,5:add an edge,6:del edge,7:display");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:create();
		break;
		case 2:insvertex();
		break;
		case 3:delvertex();
		break;
		case 4:findvertex();
		break;
		case 7:display();
		break;
		
	}
	printf( "press 1 to continue 0 to exit");
	scanf("%d",&p);
	
}
return 0;

}
int create()
{
	int v1,v2,i=1;
	while(i)
	{
	
	printf("enter the vertex v1 and v2");
	scanf("%d%d",&v1,&v2);
	a[v1][v2]=1;
	a[v2][v1]=1;
	printf("do you wantto continue");
	scanf("%d",&i);
	
}
	return 0;
	
}
int insvertex()
{
int v1,v2,i=1;
while(i)
{
	

printf("enter the vertex");
scanf("%d",&v1);
printf("enter the neighbouring vertex");
scanf("%d",&v2);
a[v1][v2]=1;
a[v2][v1]=1;
printf("do u want to insert more");
scanf("%d",&i);
}
return 0;
}
int delvertex()
{
	int v1,i=1,j;
	while(i)
	{
		printf("enter the vertex u want to delete");
		scanf("%d",&v1);
		for(j=0;j<10;j++)
		{
			
		
		a[v1][j]=0;
		a[j][v1]=0;
	}
	printf("do u want to delete more");
	scanf("%d",&i);
	}return 0;
	
}
int findvertex()
{
	int v1,i,p=0;
	printf("enter the vertex to find");
	scanf("%d",&v1);
	for(i=0;i<10;i++)
	{
		if(a[i][v1]==1||a[v1][i]==1)
		p=1;
		
	}
	if(p==1)
	printf("vertex found");
	else
	{
		printf("vertex not found");
	}
	return 0;
	
}
int display()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("a[%d][%d]=%d",i,j,a[i][j]);
			
		}
	}
	return 0;
}
