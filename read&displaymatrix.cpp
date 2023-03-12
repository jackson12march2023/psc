#include <stdio.h>
void readmatrix(int m[][10], int rows, int cols);
void displaymatrix(int m[][10], int rows, int cols);
int main(void)
{
	int m[10][10], rows, cols;
	printf("\n Enter number of Rows: ");
	scanf("%d", &rows);
	printf("\n Enter number of Columns: ");
	scanf("%d", &cols);
	readmatrix(m,rows,cols);
	displaymatrix(m,rows,cols);
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
