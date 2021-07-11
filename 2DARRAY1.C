/*program to test 2D Array for calculating sum of marks of students*/

#include<stdio.h>
#include<conio.h>
void main()
{
int student[3][2], i, j, total=0;

Start:
clrscr();
printf("\nEnter the five subject marks :\n\n");

for(i=0;i<3;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("\t%d",&student[i][j]);
	}
	printf("\n\n");
}

printf("\nThe values are : \n");
for(i=0;i<3;i++)
{
	for(j=0;j<2;j++)
	{
		printf("\t%d",student[i][j]);
		total=total+student[i][j];
	}
	printf("\tTotal: %d",total);
	total=0;
	printf("\n\n");
}
getch();
}

