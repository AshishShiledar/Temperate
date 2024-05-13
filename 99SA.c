#include<stdio.h>
#include<conio.h>
void main()
{
int i=100;
do 
{
if(i%2==0)
{
	printf("\n %d",i);
}
i--;
}
while(i>1);
getch();
}