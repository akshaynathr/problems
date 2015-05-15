#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
int fib[20]; //stores computed fib numbers in array(memoization)

fib[0]=0;

fib[1]=1;


int i=0;

scanf("%d",&n);

for(i=2;i<=n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		
//		printf("fib[%d]=%d",i,fib[i]);	


	}

printf("fibonacci number=%d",fib[n]);


return 0;
}
