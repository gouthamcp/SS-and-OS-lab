#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char ip[20],stack[20];
int main()
{
char m[2][3][10]={{"aBa","E","E"},{"n","bB","n"}};
int size[2][3]={3,1,1,1,2,1};
int i,j,k,n,row,col;
printf("\n enter the input string:");
scanf("%s",ip);
strcat(ip,"$");
n=strlen(ip);
stack[0]='$';
stack[1]='A';
i=1;
j=0;
printf("\n stack\t\t input\n");
printf("______________\t\t_______________________\n");
while((stack[i]!='$') && (ip[j]!='$'))
{
if(stack[i]==ip[j])
{
i--;
j++;
}
switch(stack[i])
{
case 'A':row=0;
break;
case 'B':row=1;
break;
}
switch(ip[j])
{
case'a':col=0;
if(stack[i]=='$')
{
printf("error");
exit(0);
}
break;
case'b':col=1;
if(stack[i]=='$')
{
printf("error");
exit(0);
}
break;
case'$':col=2;
if(stack[i]!='$')
{
printf("error");
exit(0);
}
break;
System Software & Operating Systems Lab – 15CSL67 Gururaj.T,Asso.Prof.,CSE,SJMIT.
Dept. Of CSE,SJMIT Page 20
}
if(m[row][col][0]=='E')
{
printf("\nERROR");
exit(0);
}
else if(m[row][col][0]=='n')
i--;
else if(m[row][col][0]==ip[j])
{
for(k=size[row][col]-1;k>=0;k--)
{
stack[i]=m[row][col][k];
i++;
}
i--;
}
for(k=0;k<=i;k++)
printf("%c",stack[k]);
printf("\t\t");
for(k=j;k<=n;k++)
printf("%c",ip[k]);
printf("\n");
}
k--;
if(i<0)
printf("\nSUCCESS");
else
printf("\nerror");
return 0;
}