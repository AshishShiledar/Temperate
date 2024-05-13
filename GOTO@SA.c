#include<stdio.h>
#include<conio.h>
void main()
{
int no,i=1;
printf("enter value n: \n");
scanf("%d",&no);
table:	
printf("%d*%d=%d \n",no,i,no*i);
i++;
if(i<=10)
{		
goto table;
getch();
}
}