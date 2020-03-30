%{
#include<stdio.h>
int v=0,op=0,id=0,flag=0;
%}
%%
[0-9]+ {id++;printf("\n identifier:");ECHO;}
[\+\-\*\/\=] {op++;printf("\n operator :");ECHO;}
"(" {v++;}
")" {v--;}
";" {flag=0;}
.|\n {;}
%%
main()
{
printf("enter the expression");
yylex();
if((op+1)==id && v==0)
printf("\n expression is valid\n");
else
printf("\n expression is invalid\n");
printf("no. of identifiers=%d\n",id);
printf("no. of operators=%d\n",op);
}