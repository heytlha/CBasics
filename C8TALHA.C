#include<stdio.h>
#include<conio.h>
void main()
	{
	int a,b,c,larg;
	clrscr();
	printf("Enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	larg=a;
	if(b>larg)
	{
	larg=b;
	}
	if(c>larg)
	{
	larg=c;
	}
	printf("Largest number is:%d",larg);
	getch();

}