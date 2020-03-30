{
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int valid=0,n=0;
%}
%%
line:
|line an'b''\n'{
if(n>=0)valid=1;
return;
}
an:
|'a'an{n++;}
;
%%
int main()
{
printf("\n enter the string:\n");
yyparse();
if(valid)
printf("the string is valid and number of a's=%d",n);
else
printf("\n the string is invalid and number of a's=%d",n);
}
yylex()
{
int c=getchar();
return;
}
yyerror()
{
printf("invalid input\n");
return;
}