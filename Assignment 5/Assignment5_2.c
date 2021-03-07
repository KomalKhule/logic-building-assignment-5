

#include<stdio.h>
void FactRev(int iNo)
{
	int i=1;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=iNo/2;iNo>=1;i--)
	{
	if(iNo%i==0)
	{
		printf("%d\n",i);
	}
	}
}
// time complexity-O(n/2)
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
FactRev(iValue);
return 0;
}