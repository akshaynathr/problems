#include <stdio.h>

int main(void)
{
int lmt= 1000;

int a[lmt+1];
int j;
int i;
int k;
for(i=1;i<lmt+1;i++){a[i]=i;}


for(i=2;i<8;i++)
{

if(a[i]==-1){ continue;}
else 
{j=i;
 k=1;
while(j*k<=1000){  
	switch(i){case 2: case 3:  case 5: case 7:k++;continue; }
	a[j*k]=-1; k++; }

}

}



for(i=2;i<lmt+1;i++){if(a[i]!=-1) printf("%d\n",a[i]);}
return 0;}
