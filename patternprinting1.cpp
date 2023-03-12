#include <stdio.h>
int main (void)
{
	int i,j;
	for(i=1;i<=5;++i){
		printf("\n");
		for(j=5;j>=i;--j)
			printf(" ");
		for(j=1;j<=i;++j)
			printf("*");
		for(j=2;j<=i;++j)
			printf("*");
	}
	for(i=1;i<=5;++i){
		printf("\n");
	for(j=1;j<=i;++j)
		printf(" ");
	for(j=5;j>=i;--j)
		printf("*");
	for(j=4;j>=i;--j)
		printf("*");
	}
	return 0;
}
