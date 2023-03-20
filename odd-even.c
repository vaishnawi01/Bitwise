#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
	int a, b;
	scanf("%d", &a);
	if ((a&1)==0)
	{
		printf("the no. is even");
	}
	else 
	{
		printf("the no. is odd");
	}
	return 0;
}
