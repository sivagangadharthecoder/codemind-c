#include<stdio.h>

void bubble_sort_function(int *array,int size)
{
	int i,j;
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<size-1; j++)
		{
			if (array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int main()
{
	int size;
	scanf("%d",&size);
	int array[size],i;
	for (i=0; i<size; i++)
	{
		scanf("%d",&array[i]);
	}
	
	bubble_sort_function(array, size);
	
	for (i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}