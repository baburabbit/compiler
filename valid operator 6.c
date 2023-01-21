#include<stdio.h>
#include<conio.h>
int main()
{
char s[5];
printf("\nEnteranyoperator:");
gets(s);
switch(s[0])
{
case'>':if(s[1]=='=')
printf("\nGreaterthanorequal");
else
printf("\nGreaterthan");
break;
case'<':if(s[1]=='=')
printf("\nLessthanorequal");
else
printf("\nLess than");
break;
case'=':if(s[1]=='=')printf("\nEqualto");
else
printf("\nAssignment");
break;
case'!':if(s[1]=='=')
printf("\nNot Equal");
else
printf("\nBitNot");
break;
case'&':if(s[1]=='&') 
printf("\nLogical AND");
else
printf("\n Bitwise AND");
break;
case'|':if(s[1]=='|')printf("\nLogical OR");
else
printf("\nBitwise OR");
break;
case'+':printf("\nAddition");
break;
case'-':printf("\nSubstraction");
break;
case'*':printf("\nMultiplication");
break;
case'/':	printf("\nDivision");
break;
case'%':printf("Modulus");
break;
default:printf("\nNotaoperator");
}
}

