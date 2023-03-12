#include <stdio.h>
int leastprime(int num);
int main(void){
int num, least;
printf("\n Enter number: ");
scanf(" %d", &num);
least= leastprime(num);
printf("\n Least prime factor is %d ", least);
return 0;
}
int leastprime(int num){
int fact,i,c=0,factresult=0;
for(fact=1;fact<=num;++fact)
{
if (num%fact==0)
factresult=fact;
}
for(i=2;i<=factresult;++i)
{
if(factresult%i==0)
++c;


if(c==1)
break;

}
return i;
}
