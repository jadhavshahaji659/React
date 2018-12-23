#include<stdio.h>
////////////////////////////////////////////////////////////
//Name:OddEven
//Input:Integer
//Output:odd or Even
//Description:It is use to find number is odd or even
//Author:Amar Shahaji Jadhav
//Date:10/03/2018
////////////////////////////////////////////////////////////
typedef int BOOL;
BOOL chkOddEven(int iNo)
{
	if((iNo%2)==0)
	{
		printf("%d is Even number",iNo);
	}
	else
	{
		printf("%d is Odd number",iNo);
	}
}
