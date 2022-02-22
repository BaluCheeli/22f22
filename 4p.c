#include<stdio.h>
#include<string.h>

int main()
{
	int i;
char (*p)[5];
char arr[5]={'a','e','i','o','u'};
p=&arr;
for(int i=0;i<5;i++)
{
//printf("the arrays are\t a[%d] is %c\n",i,arr[i]);

	printf("p[%d] is arr[%d]-> %c\n",i,i,(*p)[i]);

	//printf("%c",(*p)[i]);
}

return 0;
}
