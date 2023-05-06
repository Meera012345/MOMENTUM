#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("Enter the value of A:-");
	scanf("%d",&a);
	(a%2==0)?printf("This Number is Even."):printf("This Number is Odd.");
	getch();

}