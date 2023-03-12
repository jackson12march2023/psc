#include <stdio.h>
void readmatrix(int m[][10], int r, int c);
void printmatrix(int m[][10], int r, int c);
void add(int m1[][10], int m2[][10], int m3[][10], int r1, int c1, int r2, int c2);
void product(int m1[][10], int m2[][10], int m3[][10], int r1, int c1, int r2, int c2);
int main(void)
{
	int m1[10][10], m2[10][10], m3[10][10], r1, c1, r2, c2;
	printf("\n Enter Number Of Rows for 1st matrix : ");
	scanf(" %d", &r1);
	printf("\n Enter Number Of Cols for 1st matrix: ");
	scanf(" %d", &c1);
	readmatrix(m1, r1, c1);
	printmatrix(m1, r1, c1);
	printf("\n Enter Number Of Rows for 2nd matrix : ");
	scanf(" %d", &r2);
	printf("\n Enter Number Of Cols for 2nd matrix: ");
	scanf(" %d", &c2);
	readmatrix(m2, r2, c2);
	printmatrix(m2, r2, c2);
	if(r1==r2&&c1==c2){
	add(m1, m2, m3, r1, c1, r2, c2);
	printf("\n ADDITION OF MATRICES: ");
	printmatrix(m3, r1, c1);
}
	else
	printf("\n ADDITION NOT POSSIBLE");
	if(c1==r2){
	product(m1, m2, m3, r1, c1, r2, c2);
	printf("\n MULTIPLICATION OF MATRICES: ");
	printmatrix(m3, r1, c2);
}
	else
	printf("\n Multiplication Not Possible");
return 0;
}
void  readmatrix(int m[][10], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("\n Enter Element: ");
			scanf(" %d", &m[i][j]);
		}
	}
}
void printmatrix(int m[][10], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<c;j++){
			printf(" %d", m[i][j]);
		}
	}
}
void add(int m1[][10], int m2[][10], int m3[][10], int r1, int c1, int r2, int c2)
{
	int i,j, temp;
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			m3[i][j]=m1[i][j]+ m2[i][j];
		}
	}
}
void product(int m1[][10], int m2[][10], int m3[][10], int r1, int c1, int r2, int c2){
	int i,j, temp;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(temp=0;temp<c1;temp++){
			m3[i][j]+=m1[i][temp]*m2[temp][j];
		}
	}
}
}
