#include<stdio.h>

int Addition(int a , int b)
{
    int iSum = 0;
    iSum = a+b;
    return iSum;

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;

    printf("Enter the First Value :");
    scanf("%d",&iValue1);

    printf("Enter the Second Value:");
    scanf("%d",&iValue2);

    iAns = iValue1 + iValue2;

    printf("The Answer is : %d",iAns);

    return 0;
}