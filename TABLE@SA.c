#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,no;
printf("enter no:");
scanf("%d",&no);
while(i<=10)
{
	
	printf("\n%d*%d=%d",no,i,no*i);
i++;	
	}			
getch();	
}