#include<stdio.h>
#include<string.h>
#define SIZE 1000
int myswp(int ,int [],int []);

int myswp(int s1,int a1[],int a2[])
{
 int *const b1=a1;
 int *const b2=a2;
 int i;
 for(i=0;i<s1;i++)
 {
  int temp;
  temp=*(b1+i);
  *(b1+i)=*(b2+i);
  *(b2+i)=temp;
  }
}

int main()
{
int s1,s2,a1[SIZE],a2[SIZE],i;
int *p1,*p2;
int (*fp)(int ,int [],int []);
printf("enter the array1 size\n");
scanf("%d",&s1);
printf("enter the elements in array\n");
for(i=0;i<s1;i++)
{
scanf("%d",&a1[i]);
}
printf("enter the elements in array2\n");
for(i=0;i<s1;i++)
{
scanf("%d",&a2[i]);
}

printf("before swp\n");
for(i=0;i<s1;i++)
{
printf("array 1 is %d\n",a1[i]);
}
printf("\n");
for(i=0;i<s1;i++)
{
printf("array 2 is %d\n",a2[i]);
}
printf("\n");
fp=myswp;
fp(s1,a1,a2);
printf("after swap\n");
for(i=0;i<s1;i++)
{
printf("array 1 is %d\n",a1[i]);
}
printf("\n");
for(i=0;i<s1;i++)
{
printf("array 2 is %d\n",a2[i]);
}
printf("\n");


return 0;
}
