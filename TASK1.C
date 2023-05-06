#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Please Enter Any Character:-");
	scanf("%c",&ch);

	if(ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z')
	{
		printf("This Character is Alphabet.");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("This character is Digit.");
	}
	else
	{
		printf("This Character is Special Character.");
	}
	getch();
}
