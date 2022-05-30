#include<stdio.h>



int CountTwo(int iNo)
{
   int iFrequency=0;
int iCnt=0;
for(iCnt=0;iCnt<iNo;iCnt++)

 if(iCnt==2)
{
    iCnt;
}   


return iCnt;
}

int main()
{
    int iValue=0;
   int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);
    printf("%d\n",iRet);

    
    return 0;
}