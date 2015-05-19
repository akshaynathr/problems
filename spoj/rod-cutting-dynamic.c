#include <stdio.h>
#include <limits.h>
int max(int a,int b)
{ if(a>=b) return a; else return b;}

int cut_rod(int price[],int n)
{
int val[n+1];

val[0]=0;	

int i,j;
int q;
for(i=1;i<=n;i++)
{ 

q=INT_MIN;

for(j=0;j<i;j++)
	q=max(q , price[j]+val[i-j-1]);
	
	val[i]=q;
}
return val[n];
}
int main()
{
	int price[]={1 ,5, 8,9,10,17,20};
	int n=8;

	printf("Optimal Max solution is :%d\n",cut_rod(price,n));	



return 0;
}
