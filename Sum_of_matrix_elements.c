#include<stdio.h> /*syntax*/
int main()
{
	int r,c,sum=0; //declaring no.of rows and columns
	scanf("%d%d",&r,&c);//reading no.of rows and columns
	int i,j;// declaring the possible no.of elements in matrix
	int a[r][c];// declaring the matrix
	for(i=0;i<r;i++) // giving range to the no.of rows 
	{
		for(j=0;j<c;j++) // giving range to the no.of columns
		{
			scanf("%d",&a[i][j]);// reading the matrix
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    sum=sum+a[i][j];
			//printing the matrix
		}
 // to let the elements in the next row
	}
	printf("%d ",sum);//
	
}
