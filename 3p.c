#include<stdio.h>
#include<string.h>
#define SIZE 100
void cmpstpt(int ,char [],char []);

void cmpstpt(int n,char a1[],char a2[])
{
int i,temp;
for(i=0;i<n;i++)
{
if(a1[i]==a2[i])
temp=1;
else 
temp=0;
}
        if(temp==1)
	printf("\n strings are equal\n");
	else
	printf("\n strings are not equal\n");
}

int main()
{
char (*fp)(int ,char a1[],char a2[]);
int n,i;
char a1[SIZE],a2[SIZE];
//printf("enter the size of string\n");
//scanf("%d",&n);
printf("enter the string1 to compare \n");
for(i=0;i<n;i++)
{
	scanf("%s",&a1[i]);
}
for(i=0;i<n;i++)
{
printf("%s",a1[i]);
}
printf("enter the string2 to compare \n");
for(i=0;i<n;i++)
{ 
scanf("%s",&a2[i]);
}
fp=cmpstpt;
fp(n,a1,a2);
return 0;
}
