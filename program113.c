#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    
    int iMax=0; 
    int iMin=0;
 int iCnt=0;
 int iAns=0;
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
       if(iMax<Arr[iCnt])
       {
           printf("%d\n",Arr[iCnt]);
       }
        
    }
    
    return iAns;
    
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Minimum(ptr,iSize);
    printf("Minimum number is : %d\n",iRet);
    free(ptr);

    return 0;
}