#include<stdio.h>
#include<malloc.h>
void acceptData();
void printData();
int ** data;
int rows,columns,zeroValuedCellCount;
int dataFeeded;
int isSparseMatrix;
void acceptData()
{
int x[5][5],r,c,nonZeroValuedCellCount,i;
rows=5;
columns=5;
zeroValuedCellCount=0;
for(r=0;r<rows;r++)
{
for(c=0;c<columns;c++)
{
	printf("Enter the data in %d row and %d column \n",r,c);
	scanf("%d",&x[r][c]);
	if(x[r][c]==0) zeroValuedCellCount++;
}
}
printf("the feeded matrix is\n");
for(r=0;r<rows;r++)
{
	for(c=0;c<columns;c++)
	{
		printf("%7d",x[r][c]);
	}
	printf("\n");
}
dataFeeded=1;
if(zeroValuedCellCount>(rows*columns)/2)
{
	isSparseMatrix=1;
	if(data!=NULL) free(data);
	nonZeroValuedCellCount=rows*columns-zeroValuedCellCount;
	data=(int **)malloc(sizeof(int *)*(nonZeroValuedCellCount+1));
	i=0;
	while(i<(nonZeroValuedCellCount+1))
	{
		data[i]=(int *)malloc(sizeof(int)*3);
		i++;
	}
	data[0][0]=rows;
	data[0][1]=columns;
	data[0][2]=nonZeroValuedCellCount;
	i=1;
	for(r=0;r<rows;r++)
	{
		for(c=0;c<columns;c++)
		{
			if(x[r][c]!=0)
			{
				data[i][0]=r;
				data[i][1]=c;
				data[i][2]=x[r][c];
				i++;
			}
		}
	}
	printf("The feeded matrix is sparse matrix\n");
}
else
{
	isSparseMatrix=0;
	if(data!=NULL) free(data);
	data=(int **)malloc(sizeof(int *)*rows);
	i=0;
	while(i<rows)
	{
		data[i]=(int *)malloc(sizeof(int)*columns);
		i++;
	}
	for(r=0;r<rows;r++)
	{
		for(c=0;c<columns;c++)
		{
			data[r][c]=x[r][c];
		}
	}
	printf("The feeded matrix is not sparse matrix\n");
}
}
void printData()
{
	int r,c;
	int x[5][5];
	if(isSparseMatrix)
	{
		for(r=0;r<rows;r++)
		{
			for(c=0;c<columns;c++)
			{
				x[r][c]=0;
			}
		}
		int i=1;
		while(i<data[0][2])
		{
			x[data[i][0]][data[i][1]]=data[i][2];
			i++;
		}
	}
	else
	{
		for(r=0;r<rows;r++)
		{
			for(c=0;c<columns;c++)
			{
				x[r][c]=data[r][c];
			}
		}
	}
	for(r=0;r<rows;r++)
	{
		for(c=0;c<columns;c++)
		{
			printf("%7d",x[r][c]);
		}
	printf("\n");
	}
}
int main()
{
	int ch,flag;
while(1)
{
	flag=0;
	printf("1.add\n2.print\n3.exit\nenter your choice");
	scanf("%d",&ch);
	if(ch==1)
	{
		flag=1;
		acceptData();
	}
	if(ch==2)
	{
		flag=1;
		if(dataFeeded==0)
		{
			printf("Data not feeded!\n");
		}
		printData();
	}

	if(ch==3)
	{
		break;
	}
	if(flag==0)
	{
		printf("Wrong choice!\n");
	}
}
return 0;
}