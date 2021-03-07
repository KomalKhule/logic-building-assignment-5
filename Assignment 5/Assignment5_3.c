

#include<stdio.h>
void NonFact(int iNo)
{
	int icnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(icnt=1;icnt<iNo;icnt++)
	{
		if((iNo%icnt)!=0)
		{
			printf("%d\n",icnt);
		}
	}
}
// time complexity-O(n)
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
NonFact(iValue);
return 0;
}