#include <stdio.h>
#include <limits.h>


int max(int a,int b)
{
if (a>=b) return a; else return b;
}
int cut_rod(int price[8],int n)
{
int i=0;
if (n<=0) return 0;

int q=INT_MIN;
for(i=0;i<n;i++)
{ 
	q=max(q,price[i]+cut_rod(price,n-i-1));
	}


return q;
}


int main()
{

int price[]={1,5,8,9,10,17,17,20};
int n=8;int tot;
tot=cut_rod(price,n);
printf("Optimal Maximum Solution= %d",tot);
return 0;}
