#include <stdio.h>
#include <stdlib.h>

void printArray(int a[], int size)
{ int i;
  for(i=0;i<size;i++) printf("%d",a[i]);
}


int allNine(int a[],int size)
{ int i=0;
 for(i=0;i<size;i++) {if(a[i]!=9) return 0;}
 
return 1;
}


int * findNextPalindrome(int *a,int size)
{
int begin=0;

int mid=size/2;

int midBegin=(size%2?mid+1:mid);

int end=size;

int i,j,k;

int leftsmaller=0;

i=mid-1; j=midBegin;
//stage 1  : Given number is  a palindrome

while(i>=0 && a[i]==a[j])
	 {i--;j++;}

//i and j cross boundart => it is a palindrome calue

//if(i<0 && j>=end)
//	{ if(size/2==0) { a[mid]+=1;} else {a[mid]+=1; a[mid+1]+=1;}  for(k=0;k<end;k++) printf("%d",a[k]);  }


/////////////////////////////////////////////////////////////////////////////

if(i<0 || a[i] < a[j])  leftsmaller=1;

//case left >right
//copy left to right
while(i>=0) 
{
a[j]=a[i];  i--;j++;
}
//end//////////////////////

//case left <right///////

if(leftsmaller==1) {
	int carry=1;
	i=mid-1;
	//add 1 to middle digit
	if(size%2==1)
	{ 	a[mid]+=carry;
		carry=a[mid]/10;
		a[mid]=a[mid]%10;
	 	j=mid+1;

	} 

	else j=mid;

	while(i>=0) {
			a[i]+=carry;
			carry=a[i]/10;
			a[i]%=10;
			a[j++]=a[i--];


			

		   }

}
return a;
}

int main()
{
int T,n;
char no[100];int a[100];
scanf("%d",&T);
while(T--)
{

	scanf("%s",no);
	
	int l=strlen(no);
	
	int *array=malloc(sizeof(int)*l);
	int i;
	for(i=0;i<l;i++)
		{a[i]=no[i]-'0';
	//	printf("%d",a[i]);
	
	}
	
	if(allNine(a,l)==1) {
		printf("1");
		for(i=0;i<l-1;i++)
			printf("0");
		printf("0\n");}

	else
		{	
			findNextPalindrome(a,l);
			printArray(a,l);
			printf("\n");
		}

	}





return 0;
}



