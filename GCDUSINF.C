/*Write a C programme that uses non recursive functions to find the GCD of two given integers.*/

       // GCD of 2 numbers//     //Date:26-11-2015//

	//M.V.L Sri Harshita    Roll no:15251A12A7//

#include<stdio.h>
int GCD(int ,int );
void main()
{
	int a,b,gcd;
	clrscr();
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	gcd=GCD(a,b);
	printf("The GCD of two numbers %d and %d is %d",a,b,gcd);
	getch();
}
int GCD(int x,int y)
{
	int temp;
	if(x==0)
	return y;
	else if(y==0)
	return x;
	else
	{
		do
		{
			temp=x%y;
			x=y;
			y=temp;
		}while(y!=0);
		return x;
	}
}
/*
Output:
Enter two numbers:
27
81
The GCD of two numbers 27 and 81 is 27






*/