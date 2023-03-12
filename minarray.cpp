#include <stdio.h>
int minarray(int num[], int size);
int maxarray(int num[], int size);
int main(void)
{
	int num[100], size, min,max;
	printf("\n Enter Array Size: ");
	scanf(" %d", &size);
	min=minarray(num, size);
	max=maxarray(num, size);
	printf("\n The minimum of the array is: %d", min);
	printf("\n The maximum of the array is: %d", max);
return 0;
}
int minarray(int num[], int size)
{
	int i,j,min;
	for(i=0,j=1;i<size,j<=size;++i,j++){
		printf("\n Enter Element %d: ", j);
		scanf(" %d", &num[i]);
	}
	min=num[0];
	for(i=0;i<size;i++){
		if(min>num[i])
			min=num[i];
	}
	return min;
}
int maxarray(int num[], int size)
{
	int i,max;
	max=num[0];
	for(i=0;i<size;i++){
		if(max<num[i])
			max=num[i];
	}
	return max;
}
