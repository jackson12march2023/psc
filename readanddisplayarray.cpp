#include <stdio.h>
void readArray(int num[], int size);
void displayArray(int num[], int size);
int main(void)
{
	int num[100], size;
	printf("\n Enter Array Size: ");
	scanf(" %d", &size);
	readArray(num,size);
	displayArray(num,size);
return 0;
}
void readArray(int num[], int size)
{
	int i,j;
	for(i=0,j=1;i<size,j<=size;i++,j++){
		printf("\n Enter Element %d: ",j);
		scanf(" %d", &num[i]);
}
}
void displayArray(int num[], int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("\n The Array Elements are: ");
		for(i=0;i<size;i++){
			printf(" %d", num[i]);
		}
	}
}
