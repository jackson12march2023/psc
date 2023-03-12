// INSERTION SORT
#include <stdio.h>
#include <stdbool.h>
void readarray(int n[], int size);
void displayarray(int n[], int size);
void insertionsort(int n[], int size);
int main(void){
	int n[100], size;
	printf("\n Enter size of the array: ");
	scanf(" %d", &size);
	readarray(n, size);
	printf("\n Before Sorting: ");
	displayarray(n, size);
	insertionsort(n, size);
	printf("\n After Sorting: ");
	displayarray(n, size);
return 0;
}
void readarray(int n[], int size){
	int i,k=1;
	for(i=0;i<size;i++,k++){
		printf("\n Enter Element %d: ", k);
		scanf(" %d", &n[i]);
	}
}
void displayarray(int n[], int size){
	int i;
	printf("\n The Array Elements are: ");
	for(i=0;i<size;i++){
		printf(" %d", n[i]);
	}
}
void insertionsort(int n[], int size){
	int i,j,temp;
	bool isLocated;
	for(i=1;i<size;i++){
		temp=n[i];
		isLocated=false;
		for(j=i-1;j>=0&&!isLocated;){
			if(temp<n[j]){
					n[j+1]=n[j];
					--j;
			}
			else
				isLocated=true;
		}
		n[j+1]=temp;
	}
}
