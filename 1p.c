#include <stdio.h>
#define MSIZE 100
int srch(int ,int [],int );

int main()
{  
    int (*fp)(int ,int [],int );	
    int a[MSIZE];
    int n,s,i,l;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the elements are\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the element to search\n");
    scanf("%d",&s);
    fp=srch;
    fp(n,a,s);
    return 0;
}

int srch(int n,int a[],int s)
{   int l,f=0;
    for(int i=0;i<n;i++)
    {
	    if(s==a[i])
	    {
		 f=1;
		 break;	
            }
    }
    if(f==1)
	    printf("element found\n");
    else
	    printf("element not found\n");
}
