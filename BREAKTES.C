#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c, n, s;
float q,r;
Start:
clrscr();
printf("\nenter first number=\t");
scanf("%d",&a);
printf("\nenter second number=\t");
scanf("%d",&b);
printf("\n1. addition");
printf("\n2. subtraction");
printf("\n3. multiplication");
printf("\n4. Division");
printf("\n\n Enter your choice=\t");
scanf("%d",&n);

switch(n)
{
case 1:c=a+b;
printf("\naddition is %d",c);
break;

case 2:c=a-b;
printf("\nsubtraction in %d",c);
break;

case 3:c=a*b;
printf("\nmultiplication is %d",c);
break;

case 4:q=a/b;
r=a%b;
printf("\nThe quotient is %f & the reminder is %f",q, r);
break;

default:
printf("\ninvalid entry");
break;
}
printf("\nYou want to start again");
printf(",If yes press 5 & If No press 6 =");
scanf("%d",&s);

switch(s)
{
case 5:goto Start;
case 6:exit();
}

getch();
}
