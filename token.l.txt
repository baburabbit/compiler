digit [0-9] 
letter [A-Za-z]
%{
int count_id,count_key; 
%}
%%
(stdio.h|conio.h) { printf("%s is a standard library\n",yytext); } 
(include|void|main|printf|int) { printf("%s is a keyword\n",yytext); count_key++; } 
{letter}({letter}|{digit})* { printf("%s is a identifier\n", yytext); count_id++; } 
{digit}+ { printf("%s is a number\n", yytext); } 
\"(\\.|[^"\\])*\" { printf("%s is a string literal\n", yytext); } 
.|\n { } 
%%
int yywrap(void) { 
return 1; 
} 
int main(int argc, char *argv[]) { 
yyin = fopen(argv[1], "r"); 
yylex(); 
printf("number of identifiers = %d\n", count_id); 
printf("number of keywords = %d\n", count_key); 
fclose(yyin); 
} 