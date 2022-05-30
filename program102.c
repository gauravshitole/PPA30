#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int Arr[],int iLength,int iNo)
{
    int iAns=0;
    int iCnt=0;
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iLength++;
        }
    }
    return iAns;
}


int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0,iLength=0;
    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter the element\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);
     

     p=(int*)malloc(iSize*sizeof(int));

     if(p==NULL)
     {
         printf("Unable to allocate memory\n");
         return -1;
     }
printf("Enter %d element",iLength);
for(iCnt=0;iCnt<iLength;iLength++)
{
    printf("Enter element:%d",iCnt+1);
    scanf("%d",&p[iCnt]);

}
bRet=Check(p,iSize,iValue);

if(bRet==true)
{
    printf("Number is present\n");

}
else
{
    printf("Number is not present");
    
}

    return 0;
    
}