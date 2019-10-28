#include<stdio.h>
#include<conio.h>

	void main()
	{
	int l,b,rec=0,a,h;
	float tri=0;
	clrscr();
	printf("area of rectangle");
	printf("\nEnter length of the rectangle");
	scanf("%d",&a);
	printf("\nEnter the breadth of the rectangle");
	scanf("%d",&b);
	rec=(a*b);
	printf("\nArea of rectangle:%d",rec);
	printf("\nArea of Triangle");
	printf("\nEnter the base and height of the triagle");
	scanf("%d%d",&a,&h);
	tri=((a*h)*0.5);
	printf("\nArea of Triangle:%f",tri);
	getch();

}