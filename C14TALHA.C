#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("Largest number is:%d",a);
}
else if(b>c && b>a)
{
printf("Largest number:%d",b);
}
else
{
printf("Largest number:%d",c);
}
getch();
}