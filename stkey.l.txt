%{

#include <stdio.h>

%}

%%

if|else|while|int|switch|for|char|printf {printf("keyword",yytext);}
[a-zA-Z] {printf("word",yytext);}
[0-9]+ {printf("number",yytext);}
%%

int main()

{
printf("\n Enter the string:");
while(yylex());
}

int yywrap()

{
return 1;
}
