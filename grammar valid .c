#include<stdio.h> 
#include<conio.h>
#include<string.h>
int main() {
	char string[50];
	int flag,count=0;
	printf("The grammar is: S->aS, S->Sb, S->ab\n");
	printf("Enter the string to be checked:\n");
	gets(string);
	if(string[0]=='a') {
		flag=0;
		for (count=1;string[count-1]!='\0';count++) {
			if(string[count]=='b') {
				flag=1;
				continue;
			} else if((flag==1)&&(string[count]=='a')) {
				printf("The string does not belong to the specified grammar");
				break;
			} else if(string[count]=='a')
			continue;
			 else if((flag==1)&&(string[count]='\0')){
				printf("String accepted…..!!!!");
				break;
			} else {
				printf("String accepted");
			}
		}
	}
	getch();
	return 0;
}