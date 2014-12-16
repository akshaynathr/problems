#include <stdio.h>

int main(void)
{

int val;

while(1)
{if(scanf("%d",&val)>0 && val !=42){printf("%d\n",val);}

else if(val==42){break;}


}

return 0;}
