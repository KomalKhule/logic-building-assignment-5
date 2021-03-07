#include<stdio.h>
int MultiFact(int iNo)
{
	int i=1;
	int icnt=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo/2;i++)
	{
	if(iNo%i==0)
	{
		icnt=icnt*i;
	}
	}
return icnt;
}
// time complexity-O(n/2)
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = MultiFact(iValue);
printf("%d",iRet);
return 0;
}