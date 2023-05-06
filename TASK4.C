#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\nPress S for Sunday.");
	printf("\nPress M for Sunday.");
	printf("\nPress T for Sunday.");
	printf("\nPress W for Sunday.");
	printf("\nPress t for Sunday.");
	printf("\nPress F for Sunday.");
	printf("\nPress s for Sunday.");
	printf("\nEnter your Choice:-");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'S':
			 printf("Sunday",'S');
			 break;
		case 'M':
			 printf("Monday",'M');
			 break;
		case 'T':
			 printf("Tuesday",'T');
			 break;
		case 'W':
			 printf("Wednesday",'W');
			 break;
		case 't':
			 printf("Thursday",'t');
			 break;
		case 'F':
			 printf("Friday",'F');
			 break;
		case 's':
			 printf("Saturday",'s');
			 break;
		default :
			 printf("Please enter proper value.");
	}
	getch();
}


