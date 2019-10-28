#include<stdio.h>
#include<conio.h>
void main()
	{
	int a,b;
	clrscr();
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	printf("This is the largest number:%d",a);
	}
	else
	{
	printf("This is the largest number:%d",b);
	}
	getch();

}