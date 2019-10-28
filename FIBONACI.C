#include<stdio.h>
#include<conio.h>
void main()
	{
	int a=0,b=1,c
	n,i;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d",a);
	c=a+b;
	a=b;
	b=c;
	}
	getch();
}