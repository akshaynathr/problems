#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



struct stack {

	char array[400];
	int top;
	
	};



struct stack * buildstack()
{
struct stack * new=(struct stack *)malloc(sizeof(struct stack) );
return new;
}

int push(char data,struct stack *S)
{
if(S->top>400) return 0;
S->array[S->top+1]=data;
S->top++;

return 1;


}



int pop(struct stack * S)
{

if(S->top>-1) {
S->top--;//printf("poped top=%d",S->top);
return 1;}

else {return 0;}

}


int deletestack(struct stack * S)
{free(S);

}

int isEmpty(struct stack * S)
{

if(S->top<=-1) return 1;

else return 0;
}

int isFull(struct stack * S)
{
	if(S->top>=400) return 1;	
	else return 0;

}

int findval(char I)
{
	switch(I)
	{

	case '*': case '/':case '^': return 5;break;
	
	case '+':case '-':return 4; break;

	case '(':  return 3;break;
	
	case ')':return 2;break;
	
	default:return 1; break;


	}


}

char top(struct stack *S)
{

	if(!isEmpty(S))
		return (S->array[S->top]);

	else printf("Error");

}

void convertTopostfix(int len,char xprsn[400])
{
	int i=0,val,t;
	char val1;
	struct stack *newstack;		
	newstack=buildstack();
	
	for(i=0;i<len;i++)
		{
		val=	findval(xprsn[i]);
		
		if(xprsn[i]>='a' && xprsn[i]<='z')
			//if(val==1)
			{ printf("%c",xprsn[i]);

			}
		else if( xprsn[i]==')')
				
			{ while(top(newstack)!='(')
				//	if(findval(xprsn[i])==3) break;
				{    /*if(top(newstack)!='('  && top(newstack)!=')' )*/printf("%c",top(newstack));   t=pop(newstack);    }
				 t=pop(newstack);
			
			}
		
//		else if(xprsn[i]=='(') {t=push(xprsn[i],newstack); }
		else { t=push(xprsn[i],newstack); }
		

		} 
	while(!isEmpty(newstack) ) {/*if(top(newstack)!='('  && top(newstack)!=')' )*/printf("%c",top(newstack)); t=pop(newstack);}




deletestack(newstack);

}


int main()
{


int T,i,no, j,length;
char xprsn[400];

scanf("%d",&T);

while(T--)
{


scanf("%s",xprsn);


length=strlen(xprsn);

	

convertTopostfix(length,xprsn);
printf("\n");



}



return 0;
}
