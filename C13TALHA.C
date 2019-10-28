#include<stdio.h>
#include<conio.h>
void main()
	{
	int a,b,ch,w;

	clrscr();
	do
	{
	printf("CALCULATOR\n\n");
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\nCalculator menu\n");
	printf("Enter\n1.Addition\n2.Substraction\n3.Divison\n4.Product");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1 :printf("%d+%d=%d",a,b,(a+b));
		break;
	case 2 :printf("%d-%d=%d",a,b,(a-b));
		break;
	case 3 :printf("%d/%d=%f",a,b,(a/b));
		break;
	case 4 :printf("%d*%d=%d",a,b,(a*b));
		break;
	default :printf("Wrong option selected");
	}
	printf("\n\nDo you want to continue , if yes press 1");
	scanf("%d",&w);
	}
	while(w==1);
	getch();
}