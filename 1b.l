%{
#include<stdio.h>
%}
%token NUM UMIN
%left '+''-'
%left '*''/'
%left UMIN UPLUS
%%
line:
|line exp'\n'{printf("\n\n valid expresstion and value=%d\n\n",$2);
return 0;
}
exp:NUM{$$=$1;}
|exp'+'exp{$$=$1+$3;}
|exp'-'exp{$$=$1-$3;}
|exp'*'exp{$$=$1*$3;}
|exp'/'exp{if($3==0)
{printf("\n\n invaild\n\n");
return 0;
}
$$=$1/$3;
}
|'('exp')'{$$=$2;}
|'-'exp%prec UMIN{$$=-$2;}
|'+'exp%prec UPLUS{$$=+$2;}
%%
int main()
{
printf("\n\n enter the expressions:\n\n");
yyparse();
return 0;
}
yyerror()
{
printf("\n\n invaild \n\n");
}
yylex()
{
char c=getchar();
if(isdigit(c))
{
ungetc(c,stdin);
scanf("%d",&yylval);
return NUM;
}
return c;
}
