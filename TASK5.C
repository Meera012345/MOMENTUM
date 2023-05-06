#include<stdio.h>
#include<conio.h>

void main()
{
  int unit,Electricity_bill,sur_charge,total_eb;
  clrscr();
  printf("Enter Unit:-");
  scanf("%i",&unit);
  if(unit<=50)
  {
     Electricity_bill=unit*0.50;
  }
  else if(unit<=150)
  {
    Electricity_bill=(unit-50)*0.75+25;
  }
  else if(unit<=250)
  {
    Electricity_bill=(unit-150)*1.20+100;
  }
  else
  {
    Electricity_bill=(unit-250)*1.50+220;
  }

  sur_charge=Electricity_bill*0.2;
  total_eb=Electricity_bill+sur_charge;
  printf("Total Electricity bill = %d ",total_eb);


  getch();
}
