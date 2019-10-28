#include<stdio.h>
#include<conio.h>
void main()
	{
	int a,b,c,large;
	clrscr();
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	large=a;
	if(b>large);
	{
	large=b;
	}
	if(c>large);
	{
	large=c;
	}
	printf("\nLargest number is:%d",large);
	getch();


}