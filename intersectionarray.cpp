#include <stdio.h>
void readarray1(int n1[], int s1);
void readarray2(int n2[], int s2);
void intersectionarray(int n1[], int n2[], int s1, int s2);
int main(void)
{
	int n1[100], n2[100], s1,s2;
	printf("\n Enter Array 1 Size: ");
	scanf(" %d", &s1);
	printf("\n Enter Array 2 size: ");
	scanf(" %d", &s2);
	printf("\n Enter Array 1 Elements: ");
	readarray1(n1,s1);
	printf("\n Enter Array 2 Elements: ");
	readarray2(n2,s2);
	intersectionarray(n1, n2, s1,s2);
return 0;
}
void readarray1(int n1[], int s1)
{
	int i,k;
	for(i=0,k=1;i<s1,k<=s1;i++,k++){
		printf("\n Enter Element %d: ", k);
		scanf(" %d", &n1[i]);
	}
}
void readarray2(int n2[], int s2)
{
	int j,k;
	for(j=0,k=1;j<s2,k<=s2;j++,k++){
		printf("\n Enter Element %d: ", k);
		scanf(" %d", &n2[j]);
	}
}
void intersectionarray(int n1[], int n2[], int s1, int s2)
{
	int i,j,c=0;
	for(i=0;i<s1;i++){
		for(j=0;j<s2;j++){
			if(n1[i]==n2[j])
				++c;
}
}
	if(c!=0)
		printf("\n Intersection Elements are:");
	else
		printf("\n NO INTERSECTION ELEMENTS FOUND");
	for(i=0;i<s1;i++){
		for(j=0;j<s2;j++){
			if(n1[i]==n2[j]){
				printf(" %d", n1[i]);
			}
}
}
}















