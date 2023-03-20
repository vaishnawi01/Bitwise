#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
   int a,count=0;
   scanf("%d", &a);
   do
   {
   	if(a&1)
	{
	count++;
   	}
   	a=a>>1;
   }
   while(a!=0);
   printf("%d",count);
	return 0;
}
