#include<stdio.h>



 void ChkZero(int iNo)
{
    int iCnt=0;
  
for(iCnt=0;iNo<=iCnt;iCnt--)
    if(iNo==0)
    {
         printf("it Contains Zero\n");
    }
   else 
   {
       printf("There is no Zero");
   }
}
 


int main()
{
    int iValue=0;
   

    printf("Enter number\n");
    scanf("%d",&iValue);

    ChkZero(iValue);

    
    return 0;
}