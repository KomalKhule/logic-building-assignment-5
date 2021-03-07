
#include<stdio.h>
int FactDiff(int iNo)
{
    int icnt=0;
	int iSum=0;
	int iSum1=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(icnt=1;icnt<iNo;icnt++)
	{
		if((iNo%icnt)==0)
		{
			iSum=iSum+icnt;
		}
		else
		{
			iSum1=iSum1+icnt;
		}
	}
return iSum-iSum1;
}
// time complexity-O(n)
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = FactDiff(iValue);
printf("%d",iRet);
return 0;
}