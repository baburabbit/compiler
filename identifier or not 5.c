#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char a[10];
int flag,i=1;
printf("\nEnteranidentifier:");
gets(a);
if(isalpha(a[0]))
flag=1;
else
printf("\nNotavalididentifier");
while(a[i]!='\0')
{
if(!isdigit(a[i])&&!isalpha(a[i]))
{
flag=0;
break;
}i++;
}
if(flag==1)
printf("\n Valid identifier");
}
