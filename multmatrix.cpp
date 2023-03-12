#include <stdio.h>
void readmatrix(int m[][10], int r, int c);
void displaymatrix(int m[][10], int r, int c);
void multmatrix(int m1[][10], int m2[][10], int m3[][10],  int r1, int r2, int c1, int c2);
int main(void)
{
	int m1[10][10], m2[10][10], m3[10][10], r1, r2, c1, c2;
	printf("\n Enter number of Rows for Matrix 1: ");
	scanf("%d", &r1);
	printf("\n Enter number of Columns for Matrix 2: ");
	scanf("%d", &c1);
	readmatrix(m1,r1,c1);
	displaymatrix(m1, r1, c1);
	printf("\n Enter number of Rows for Matrix 2: ");
	scanf("%d", &r2);
	printf("\n Enter number of Columns for Matrix 2: ");
	scanf("%d", &c2);
	readmatrix(m2,r2,c2);
	displaymatrix(m2, r2, c2);
	if(c2==r1){
	multmatrix(m1, m2, m3, r1, r2, c1, c2);
	displaymatrix(m3, r1,c2);
}
	else
	printf("\n Matrix Multiplication not POSSIBLE ");
}
void readmatrix(int m[][10], int rows, int cols)
{
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("\n Enter Element: ");
			scanf(" %d", &m[i][j]);
		}
	}
}
void displaymatrix(int m[][10], int rows, int cols)
{
	int i,j;
	printf("\n The Matrix Elements  are:");
	for(i=0;i<rows;i++){
		printf("\n");
	for(j=0;j<cols;j++)
		printf(" %d", m[i][j]);
	}	
}
void multmatrix(int m1[][10], int m2[][10], int m3[][10],  int r1, int r2, int c1, int c2)
{
	int i,j,temp;
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			for(temp=0;temp<c1;++temp)
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
}
